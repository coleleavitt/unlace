__int64 __fastcall sub_1CAC80(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rax
  _QWORD *v4; // r9
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1[3];
  v2 = a1[2];
  v6[3] = __readfsqword(0x28u);
  v3 = a1[1];
  v4 = (_QWORD *)a1[6];
  v6[0] = 0;
  v6[1] = 0;
  sub_1CA3F0(v3, v2, v1, v6, a1 + 4, v4);
  qfree();
  return 1;
}

