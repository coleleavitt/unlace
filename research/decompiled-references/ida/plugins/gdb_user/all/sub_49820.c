__int64 __fastcall sub_49820(_QWORD *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 (*v8)(); // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx

  v5 = -4096;
  v8 = *(__int64 (**)())(*a1 + 496LL);
  if ( v8 != sub_12350 )
    v5 = (int)-((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (*)(), __int64, __int64))v8)(
                 a1,
                 a2,
                 sub_12350,
                 a4,
                 -4096);
  v9 = (_QWORD *)a1[78];
  v10 = a1 + 77;
  v11 = a2 & v5;
  v12 = (__int64)(a1 + 77);
  if ( !v9 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v13 = v9[2];
      v14 = v9[3];
      if ( v9[4] < v11 )
        break;
      v12 = (__int64)v9;
      v9 = (_QWORD *)v9[2];
      if ( !v13 )
        goto LABEL_8;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v14 );
LABEL_8:
  if ( v10 == (_QWORD *)v12 || (v15 = a3, v16 = *(_QWORD *)(v12 + 32), v16 >= a3 + a2) )
  {
LABEL_16:
    if ( v12 == a1[79] )
      return (__int64)v10;
    v12 = std::_Rb_tree_decrement();
    v15 = a3;
    v16 = *(_QWORD *)(v12 + 32);
  }
  if ( v15 && *(_DWORD *)(v12 + 60) && v15 + a2 - 1 >= v16 && v16 + *(int *)(v12 + 60) - 1 >= a2 )
    return v12;
  return (__int64)v10;
}

