__int64 __fastcall sub_100980(_QWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v6; // rbx
  int v7; // r12d
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  char v18; // al
  int v19; // [rsp+8h] [rbp-60h]
  int v20; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v21; // [rsp+10h] [rbp-58h]

  v21 = a1[1];
  if ( v21 )
  {
    v6 = v21 - 1;
    if ( (a4 & 0x20) == 0 )
      v6 = 0;
    v7 = a4 & 1;
    v19 = a4 & 2;
    v20 = a4 & 4;
    while ( 1 )
    {
      v8 = (_QWORD *)(*a1 + 24 * v6);
      a3[1] = v8;
      v9 = (_QWORD *)*v8;
      if ( *v8 )
      {
        if ( v8[1] )
        {
          v10 = (_QWORD *)v9[1];
          if ( v10 != v9 )
            break;
        }
      }
LABEL_19:
      if ( (a4 & 0x30) == 0 && ++v6 < v21 )
        continue;
      return 0;
    }
    while ( 1 )
    {
LABEL_8:
      v11 = v10 + 3;
      if ( !v7 )
      {
        while ( !v10[4] )
        {
          v13 = *v10;
          if ( (*v10 & 2) == 0 )
            goto LABEL_16;
          if ( (_QWORD *)*v8 == v10 )
            goto LABEL_19;
        }
      }
      if ( v19
        || *((_BYTE *)v10 + 56) != 1
        || (v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 264LL))(a2, *((unsigned int *)v10 + 12)),
            v11 = v10 + 3,
            !v18) )
      {
        if ( v20 )
        {
          if ( *((_DWORD *)v11 + 11) != -1 && (a4 & 8) == 0 )
            goto LABEL_14;
        }
        else if ( (a4 & 8) == 0 || *((_DWORD *)v11 + 11) == -1 )
        {
LABEL_14:
          result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a3 + 16LL))(a3, (unsigned int)v6);
          if ( (_DWORD)result )
            return result;
        }
      }
      v13 = *v10;
      if ( (*v10 & 2) != 0 )
      {
LABEL_18:
        if ( (_QWORD *)*v8 == v10 )
          goto LABEL_19;
      }
      else
      {
LABEL_16:
        v14 = (_QWORD *)v10[2];
        if ( (*(_BYTE *)v14 & 2) == 0 )
        {
          do
          {
            v10 = v14;
            v14 = (_QWORD *)v14[1];
          }
          while ( (*(_BYTE *)v14 & 2) == 0 );
          goto LABEL_18;
        }
        v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
        {
          while ( (_QWORD *)v15[2] == v10 )
          {
            v10 = v15;
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v16 & 2) != 0 )
            {
              v10 = (_QWORD *)v17;
              if ( *v8 != v17 )
                goto LABEL_8;
              goto LABEL_19;
            }
            v15 = (_QWORD *)v17;
          }
        }
        v10 = v15;
        if ( (_QWORD *)*v8 == v15 )
          goto LABEL_19;
      }
    }
  }
  return 0;
}
