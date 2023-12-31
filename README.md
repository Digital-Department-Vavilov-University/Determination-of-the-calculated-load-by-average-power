# Программа для расчёта активной нагрузки группы силовых приемников электроэнергии по средней мощности и коэффициенту формы графика нагрузки

## Описание
Программа позволяет рассчитывать активную нагрузка группы силовых приемников электроэнергии по средней мощности и коэффициенту формы графика нагрузки, по следующему выражению:
Рр = Кф*Рсм
Кф - где - коэффициент формы графика нагрузки по активной мощности;
Рсм - средняя активная нагрузка группы ЭП за наиболее загруженную
смену, кВт, определяемая как

![формула](https://github.com/Digital-Department-Vavilov-University/Determination-of-the-calculated-load-by-average-power/assets/135830345/3e436a40-0256-4731-a28c-5074254ddb3b)

ки - среднее значение коэффициента использования I -го электроприемника;
Рномi - номинальная мощность i-ro электроприёмника;
п — число электроприёмников в группе.
Для практических целей с достаточной точностью
можно принимать Кф = 1-1,2. При этом значение уменьшается по направлению
от низших ступеней СЭС к высшим.

![Пример работы](https://github.com/Digital-Department-Vavilov-University/Determination-of-the-calculated-load-by-average-power/assets/135830345/83ffde96-c24b-459f-b767-603fa6c64eae)


## Использование
В поле среднее значение коэффициента использования электроприемника (ед.), через пробел введите значения коэффициентов использования электроприемника. В поле Номинальная мощность электроприемника (кВт), через пробел введите мощности электроприемников. Количество чисел в первом поле должно совпадать с количеством чисел во втором поле.   Заполните текстовое поле Коэффициент формы графика нагрузки по активной мощности  одним дробным числом от 1 до 1.5.  Для практических целей с достаточной точностью можно принимать Кф = 1,0 - 1, 2.  Дробные знаки отделяются запятой
![Справка](https://github.com/Digital-Department-Vavilov-University/Determination-of-the-calculated-load-by-average-power/assets/135830345/a594001a-8399-4047-ba41-979d9f58c33a)
