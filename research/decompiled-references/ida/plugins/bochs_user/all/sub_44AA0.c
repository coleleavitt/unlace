__int64 __fastcall sub_44AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // cx
  __int64 v4; // rdx
  unsigned __int16 v6; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = -1;
  v3 = *(_WORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 40);
  v7 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_44750(qword_753F8, *(_QWORD *)(a1 + 8), v4, v3, (__int64)&v6, nullptr) )
    v2 = v6;
  free_idcv();
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}

