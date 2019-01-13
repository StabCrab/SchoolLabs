#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 0, y = 0;
    string path;
    cin >> path;
    string num_buffer;
    for (int i = 0; i < path.length(); i++) {
        if (isdigit(path[i])) {
            num_buffer.push_back(path[i]);
        } else {
            switch (path[i]) {
                case 'N':
                    y += stoi(num_buffer);
                    num_buffer.clear();
                    break;
                case 'S':
                    y -= stoi(num_buffer);
                    num_buffer.clear();
                    break;
                case 'E':
                    x += stoi(num_buffer);
                    num_buffer.clear();
                    break;
                case 'W':
                    x-= stoi(num_buffer);
                    num_buffer.clear();
                    break;
                default:
                    cout << "Wrong character: " << path[i] << endl;
                    return -1;
            }
        }
    }

    string result_path;
    if (y > 0)
        result_path += std::to_string(y) + 'N';
    else if (y < 0)
        result_path += std::to_string(abs(y)) + 'S';

    if (x > 0)
        result_path += std::to_string(x) + 'E';
    else if (x < 0)
        result_path += std::to_string(abs(x)) + 'W';

    cout << result_path;
}