#ifndef PLAN_H_
#define PLAN_H_




///���ܣ�����0->1���������ߡ��ɸ�������ļ��ٶȺ��ٶ��ж�����Ϊ���λ���������
//   ##��������##
//  Tc:���������ܹ���Ҫ��ʱ�䣬������ļ��ٶȺ��ٶȼ���
//   v:�ٶȣ����û����룬���캯����ʼ��
//   a:���ٶȣ����û����룬���캯����ʼ��
//  ta:���ٶ������ʱ�䣬��������ٶȺͼ��ٶȼ���õ�
class TCurve
{
private:
	double Tc_;
	double v_;
	double a_;
	double ta_;

public:
	auto getTCurve(int count)->double;
	auto getCurveParam()->void;
	auto getTc()->double { return Tc_; };
	TCurve(double a, double v) { a_ = a; v_ = v; }
	~TCurve() {}
};

#endif



