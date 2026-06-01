__int64 __fastcall sub_5C80(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 result; // rax

  sub_5890((__int64)a1, -1, 2);
  v1 = a1[6];
  word_143AA += *(_WORD *)(*a1 + v1);
  a1[6] = v1 + 2;
  sub_5890((__int64)a1, -1, 2);
  v2 = a1[6];
  v3 = *(_WORD *)(*a1 + v2);
  result = v2 + 2;
  word_143A8 += v3;
  a1[6] = result;
  return result;
}
