__int64 __fastcall sub_14DF00(_QWORD *a1, __int64 a2, int *a3, int a4, unsigned __int8 a5, __int64 a6, int a7)
{
  int v7; // ebp
  __int64 v9; // rbx
  unsigned int v12; // r13d
  _DWORD *v13; // rdi
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]
  __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = (a3 != nullptr) + 128;
  if ( a2 )
  {
    v9 = a2;
    v12 = 0;
    v17 = a4;
    while ( 1 )
    {
      if ( *(unsigned __int8 *)(v9 + 16) != v7 || (a5 & *(_BYTE *)(v9 + 17)) == 0 )
        goto LABEL_3;
      v13 = *(_DWORD **)(v9 + 32);
      if ( v13 && a3 )
      {
        v18 = a6;
        v15 = sub_CFFF0(v13, a3);
        a6 = v18;
        if ( v15 )
        {
          if ( *(_BYTE *)(v9 + 18) )
            goto LABEL_9;
LABEL_13:
          v19 = a6;
          v16 = sub_14DEB0(a1, v9, a6, a7);
          a6 = v19;
          if ( v16 )
            v12 |= *((_DWORD *)v16 + v17 + 7);
        }
LABEL_3:
        v9 = *(_QWORD *)(v9 + 64);
        if ( !v9 )
          return v12;
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 18) )
          goto LABEL_13;
LABEL_9:
        v9 = *(_QWORD *)(v9 + 64);
        v12 = -1;
        if ( !v9 )
          return v12;
      }
    }
  }
  return 0;
}
