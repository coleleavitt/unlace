_BYTE *__fastcall sub_3C57A0(_QWORD *a1, _BYTE *a2, __int64 a3, int a4)
{
  __int64 v4; // rdx
  int v5; // r15d
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-80h]
  __int64 v20; // [rsp+8h] [rbp-78h]
  unsigned __int64 v21; // [rsp+10h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-38h]

  v4 = a1[38];
  v27 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v4 + 4LL * a4);
  if ( v5 )
  {
    v9 = a1[6];
    v26 = 0;
    v10 = 24LL * a4 + v9;
    v25 = 0;
    v19 = 24LL * a4;
    v24 = 0;
    if ( *(_QWORD *)(v10 + 8) )
    {
      while ( 1 )
      {
        sub_F6610(&v25);
        if ( (unsigned __int64)++v24 >= *(_QWORD *)(v10 + 8) )
          break;
        v11 = v26;
        v12 = 2;
        if ( (_QWORD)v26 )
        {
          v12 = v26 + 1;
          v11 = v26 - 1;
        }
        v13 = v25;
        if ( *((_QWORD *)&v26 + 1) < v12 )
        {
          v20 = v11;
          v21 = v12;
          v18 = qvector_reserve();
          v11 = v20;
          v12 = v21;
          v25 = v18;
          v13 = v18;
        }
        *(_QWORD *)&v26 = v12;
        *(_BYTE *)(v13 + v11) = 44;
        *(_BYTE *)(v25 + v11 + 1) = 0;
      }
      if ( v5 <= 14 )
        goto LABEL_24;
    }
    else if ( v5 <= 14 )
    {
      goto LABEL_24;
    }
    v14 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v14 == sub_60D50 )
      v15 = **(_DWORD **)(a1[6] + v19);
    else
      v15 = v14((__int64)a1, a4, 0);
    v16 = (_QWORD *)a1[23];
    if ( v16 )
    {
      v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v17 )
      {
        while ( (*(_BYTE *)v17 & 2) == 0 )
        {
          if ( v15 >= *(_DWORD *)(v17 + 24) )
          {
            if ( v15 <= *(_DWORD *)(v17 + 24) )
              break;
            v17 = *(_QWORD *)(v17 + 16);
          }
          else
          {
            v17 = *(_QWORD *)(v17 + 8);
          }
        }
      }
    }
LABEL_24:
    sub_68DF0((unsigned int)v5);
    qsnprintf();
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    return a2;
  }
  *a2 = 0;
  v6 = (_QWORD *)a1[30];
  if ( v6 )
  {
    v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v7 )
      goto LABEL_27;
    while ( (*(_BYTE *)v7 & 2) == 0 )
    {
      if ( *(_DWORD *)(v7 + 24) <= a4 )
      {
        if ( *(_DWORD *)(v7 + 24) >= a4 )
        {
          if ( (_QWORD *)v7 != v6 )
LABEL_27:
            qsnprintf();
          return a2;
        }
        v7 = *(_QWORD *)(v7 + 16);
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 8);
      }
    }
  }
  return a2;
}

