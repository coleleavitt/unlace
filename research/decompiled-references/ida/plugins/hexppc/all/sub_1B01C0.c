unsigned __int64 __fastcall sub_1B01C0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 *v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r12d
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = a1;
  v4 = a2;
  v15 = __readfsqword(0x28u);
  v6 = sub_1AACF0(a3, (__int64)a2, (unsigned __int64)a1);
  sub_61330((__int64)a1, (__int64)a2, a3);
  if ( a1[3] )
  {
    if ( !(unsigned __int8)sub_60E40(a1) )
    {
      v11 = a2[1];
      v12 = 2;
      if ( v11 )
        v12 = v11-- + 1;
      v13 = *a2;
      if ( v4[2] < v12 )
      {
        v14 = qvector_reserve();
        *v4 = v14;
        v13 = v14;
      }
      v4[1] = v12;
      *(_BYTE *)(v13 + v11) = 44;
      *(_BYTE *)(*v4 + v11 + 1) = 0;
    }
    a1 += 2;
    a2 = v4;
    sub_1AFF90((__int64)(v3 + 2), v4);
  }
  if ( v6 != -1 )
  {
    v9 = v6 & 7;
    if ( v9 > 2 )
      sub_1AA590(a1, a2, v7, v8);
    sub_3267B0(v4, (unsigned int)(v9 + 41));
  }
  return v15 - __readfsqword(0x28u);
}

