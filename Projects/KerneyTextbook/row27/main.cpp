//[Free Response] The following code won't compile. Why?

class Terminator {
    private:
        int model_nb = 800;
        int iq = 180;
        bool is_deadly = true;
    public:
        void set_model_nb(int input) {
            model_nb = input;
        }
        void set_iq(int input) {
            if (input < 0 || input > 180) cout << "Out of bounds!" << endl;
            else { iq = input; }
        }
        void set_deadly(bool input) {
            if (input) is_deadly = true;
            else { is_deadly = false; }
        }
}
/*
int main(){
Terminator t();
return 0;

}
*/












