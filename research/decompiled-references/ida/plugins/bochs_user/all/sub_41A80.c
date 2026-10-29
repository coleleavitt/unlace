__int64 __fastcall sub_41A80(_QWORD *a1, __int64 a2)
{
  const char *v2; // rdx
  bool v3; // zf
  __int64 v4; // r12
  unsigned int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = s1;
  v3 = a1[6] == 0;
  v7 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (const char *)a1[5];
  v4 = 0;
  if ( !(unsigned int)sub_4F840(qword_753F8 + 64, a1[1], v2, &v6, 0, 0) )
    v4 = a1[1] + v6;
  free_idcv();
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}

