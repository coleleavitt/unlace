__int64 __fastcall sub_3E280(QT::QColor *a1, float a2)
{
  float v2; // xmm1_4
  float v4; // [rsp+24h] [rbp-34h] BYREF
  float v5; // [rsp+28h] [rbp-30h] BYREF
  float v6[7]; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  QT::QColor::getHsvF(a1, &v4, &v5, v6, nullptr);
  v2 = (1.0 - v5) * a2 + v5;
  v5 = v2;
  return QT::QColor::fromHsvF(a1, v4, v2, v6[0], 1.0);
}

