//#include <iostream>
//#include <string>
//
//
////1교시
//using namespace std;
//
//namespace number1 {
//    void print(std::string str) {
//        std::cout << str;
//    }
//}
//
//namespace number2 {
//    void print(std::string str) {
//        std::cout << "LJG\n" << str;
//    }
//}
//
////using namespace number2;    //main함수 속에 number2::print("쓰고싶은 말\n");
//
////2교시
//
//
///*class Player
//{
//public:
//    Player()    //생성자
//    {
//        cout << "주인공이 생성되었다!! 아름다운 세상!" << endl;
//    }
//    ~Player()   //소멸자
//    {
//        cout << "앗 주인공이 소멸했다..\n" << endl;
//    }
//};*/
//
////3교시
//
//bool is_game_running = false;
//
//class GameObject
//{
//public:
//    GameObject()
//    {
//        cout << "게임 오브젝트 생성\n";
//    }
//    virtual ~GameObject()
//    {
//        cout << "게임 오브젝트 소멸\n";
//    }
//
//    virtual void Start()
//    {
//        cout << "게임 오브젝트 스타트\n";
//    }
//    virtual void Update()
//    {
//        cout << "게임 오브젝트 업데이트\n";
//    }
//
//};
//class Player : public GameObject
//{
//public :
//    int HP = 100;
//    Player()
//    {
//        cout << "이진규 생성!\n";
//    }
//    ~Player()
//    {
//        cout << "이진규 생존!\n";
//    }
//    void Start()
//    {
//        cout << "이진규의 HP는" << HP << "입니다!\n";
//    }
//    void Update()
//    {
//        cout << "이진규 업데이트!\n";
//    }
//};
//class Enemy : public GameObject
//{
//public :
//    int HP = 100;
//
//    Enemy()
//    {
//        cout << "과제 생성!\n";
//    }
//    ~Enemy()
//    {
//        cout << "과제 소멸!\n";
//    }
//        
//    void Start()
//    {
//        cout << "과제의 HP는" << HP << "입니다.\n";
//    }
//    void Update()
//    {
//        cout << "과제 업데이트!\n";
//    }
//};
//    int main()
//    {
//        /*int* a = (int*)malloc(sizeof(int) * 2);   //sizeof(int) = 4
//        free(a);
//
//        int* b = new int[2];
//        delete(b); */
//
//        /*Player* player = new Player();
//        delete(player);*/
//
//        is_game_running = true;
//
//
//        GameObject* p = new Player();
//        GameObject* e = new Enemy();
//        
//        p->Start();
//        e->Start();
//
//        while (is_game_running)
//        {
//            p->Update();
//            e->Update();
//            cout << "입력해주세요 (1:게임 종료 , 2: 게임 계속)";
//            int input;
//            cin >> input;
//                if (input == 1)
//                    is_game_running = false;
//        }
//        delete(p);
//        delete(e);
//        return 0;
//    }