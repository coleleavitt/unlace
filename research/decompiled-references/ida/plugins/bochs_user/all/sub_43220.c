__int64 __fastcall sub_43220(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-280h]
  int v11; // [rsp+10h] [rbp-278h] BYREF
  __int64 v12; // [rsp+14h] [rbp-274h]
  unsigned __int64 v13; // [rsp+248h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(qword_753F8 + 4832);
  v3 = (_QWORD *)qcalloc();
  if ( (int)v2 - 1 > 0 )
  {
    v4 = (__int64 *)(a1 + 40);
    v5 = v3;
    do
    {
      v6 = *v4;
      v4 += 4;
      *v5++ = v6;
    }
    while ( v4 != (__int64 *)(a1 + 32LL * (unsigned int)(v2 - 2) + 72) );
  }
  v11 = 25;
  if ( !(unsigned int)sub_25D90(v10, &v11) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v11 = 25;
    sub_42D60(v8, (int)v2 - 1, &v11, v3);
    v9 = v12;
    *(_BYTE *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v9;
  }
  qfree();
  return 0;
}

