#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus");
	int x = 0;
	int y = 0;
	float z = 0.0;
	char evalutionOperator;
	std::cout << "введите первое число:\n";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "неправильный ввод\n";
		return 1;
	}
	std::cout << "введите второе число:\n";
	std::cin >> y;
	if (!std::cin) {
		std::cout << "неправильный ввод\n";
		return 1;
	}
	std::cout << "введите оператор вычисления (+,-,*,/):\n";
	std::cin >> evalutionOperator;
	if (!std::cin) {
		std::cout << "неправильный ввод\n";
		return 1;
	}

	switch (evalutionOperator)
	{
	case '+':
		z = x + y;
		std::cout << "сложение чисел  " << x << " и " << y << " дает ответ " << z; "\n";
		break;
	case '-':
		z = x - y;
		std::cout << "вычитание   " << y << " из " << x << " дает ответ " << z; "\n";
		break;
	case '*':
		z = x * y;
		std::cout << "умножение   " << x << " на " << y << " дает ответ " << z; "\n";
		break;
	case '&':
		z = x & y;
		std::cout << "результат побитового AND   " << x << " на " << y << " дает ответ " << z; "\n";
		break;
	case '^':
		z = x ^ y;
		std::cout << "результат побитового XOR   " << x << " на " << y << " дает ответ " << z; "\n";
		break;
	case '|':
		z = x | y;
		std::cout << "результат побитового OR   " << x << " на " << y << " дает ответ " << z; "\n";
		break;
	case '/':
		if (y == 0) {
			std::cout << "на ноль делить нельзя\n";
			return 2;
		}
		z = static_cast<float>(x) / static_cast<float>(y);
		std::cout << "деление  " << x << " на " << y << " дает ответ " << z; "\n";
		break;
	default:
		std::cout << evalutionOperator << " - некорректный ввод! ";
		std::cout << "Сделайте правильный выбор (+,-,*,/): ";
	}



	return 0;
}
