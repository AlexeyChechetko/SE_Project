# Система для оценки стоимости опционов
## Выполнили: Чечетко Алексей, Семенов Никита, Мишенков Алексей
### Цель данного проекта: 
Создать как можно более "расширяемую" систему оценки опционов. За основу проекта была взята программа с семинара №6 курса про метод Монте-Карло.

Для достижения данной цели была разработана сервисная архитектура, которую можно посмотреть в папке architecture, с подключением к базе данных PostgreSQL. Примерные требования к проекту можно найти в папке requirements. 
Сборка проекта осуществляется с использованием docker контейнеров. В одном запущена наша программа, в другом -- база данных. Ниже описана сборка проекта, а также список литературы, использованной при выполнении проекта.  

Архитектура проекта позволяет разрабатывать различные компоненты программы параллельно и легко расширять их. Например, в компоненте Loader можно легко добавить еще несколько способов загрузки данных, например, из интернета,
при этом менять уже написанный код не надо. Поскольку сборка проекта осуществляется посредством docker контейнеров, то пользователю ничего не нужно устанавливать кроме docker'а. 

Что можно улучшить?
1. Можно было бы добавить документацию doxygen с выгрузкой на GithubPages;
2. Написать тесты по времени для методов расчета цены опционов;
3. Реализовать метод Монте-Карло с помощью урчпов.

## Сборка 

1. Клонирование репозитория 

```git clone https://github.com/AlexeyChechetko/SE_Project```

2. Переход в директорию SE_Project

```cd SE_Project```

3. Делаем сценарии из папки bash_scripts исполняемыми

4. Устанавливаем docker с помощью docker_install, если он не установлен

```docker_install```

5. Запускаем приложение из папки SE_Project

```start_app```

## Работа с приложением
На экране можно увидеть следующее приглашение к вводу: "Enter command: "

Список доступных команд:
1. info - краткое описание команд
2. show - показать доступные таблицы в базе данных
3. load file data/sber.csv - загрузить данные из файла в базу данных
4. print - распечатать таблицу из базы данных
5. option CALL MC 100.5 1 - цена колл опциона
6. delete - удаляет таблицу из базы
7. exit - остановка приложения 

Для тестирвоания рекомендуем выполнить команды именно в такой последовательности

## Список литературы
1.  John Hull "OPTIONS, FUTURES, AND OTHER DERIVATIVES"
2.  Роберт Мартин "Чистая архитектура"
3.  Craig Scott "Professional CMake: A Practical Guide"
4.  Nigel Poulton "Docker Deep Dive"
