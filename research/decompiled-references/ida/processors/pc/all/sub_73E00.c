__int64 __fastcall sub_73E00(__int64 a1, __int64 a2, signed int a3, _QWORD *a4, char a5)
{
  _QWORD *v6; // rbx
  __int64 *func; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 *v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  char v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 5312);
  v21 = __readfsqword(0x28u);
  func = (__int64 *)get_func();
  v9 = v6[7];
  if ( func )
  {
    if ( *func == v9 )
      goto LABEL_8;
    v10 = v6[3];
    if ( !v10 )
    {
      v6[6] = 0;
      v6[4] = v6 + 2;
      v6[5] = v6 + 2;
LABEL_6:
      v12 = *func;
LABEL_7:
      v6[7] = v12;
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  if ( v9 != -1 )
  {
    v10 = v6[3];
    if ( !v10 )
    {
      v6[6] = 0;
      v6[4] = v6 + 2;
      v6[5] = v6 + 2;
      goto LABEL_15;
    }
    do
    {
LABEL_4:
      sub_69AA0(*(_QWORD **)(v10 + 24));
      v11 = (void *)v10;
      v10 = *(_QWORD *)(v10 + 16);
      operator delete(v11, 0x1E8u);
    }
    while ( v10 );
    v6[3] = 0;
    v6[4] = v6 + 2;
    v6[5] = v6 + 2;
    v6[6] = 0;
    if ( func )
      goto LABEL_6;
LABEL_15:
    v12 = -1;
    goto LABEL_7;
  }
LABEL_8:
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(__int64 **)(a1 + 5312);
  v20 = 0;
  v19 = 0;
  result = sub_73300(v14, v13, a3, (__int64)&v19, 0, a5);
  if ( (_BYTE)result )
  {
    if ( (v20 & 3) == 1 )
    {
      v16 = v19;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v16 = (int)v19;
      *a4 = v16;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
