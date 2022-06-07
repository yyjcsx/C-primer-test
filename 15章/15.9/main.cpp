class Basic{};
class Advanced:public Basic{};


int main() {
	Basic* basic;
	Advanced advanced;
	basic = &advanced;
	*basic = advanced;
	Advanced* ad2 = &advanced;
	*basic = *ad2;

}