__int64 __fastcall sub_44D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 40);
  v7[1] = __readfsqword(0x28u);
  v7[0] = v4;
  if ( !(unsigned int)sub_44B20(qword_753F8, v3, v7) )
  {
    v2 = 1;
    sub_43340(*(_QWORD *)(qword_753F8 + 5520), 2, nullptr, v3, v7[0], v5, v7[0]);
  }
  free_idcv();
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v2;
  return 0;
}

