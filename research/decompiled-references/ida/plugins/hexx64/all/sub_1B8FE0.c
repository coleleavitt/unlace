unsigned __int64 __fastcall sub_1B8FE0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rax
  __int64 first_fcref_from; // r13
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *i; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  _QWORD *v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  _QWORD v37[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(a2 + 400);
  v38 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v6 )
      return v38 - __readfsqword(0x28u);
    while ( (*(_BYTE *)v6 & 2) == 0 )
    {
      v13 = *(_QWORD *)(v6 + 24);
      if ( v4 < v13 )
      {
        v6 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        if ( v13 >= v4 )
        {
          if ( (_QWORD *)v6 == v3 )
            break;
          return v38 - __readfsqword(0x28u);
        }
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
  }
  first_fcref_from = get_first_fcref_from();
  if ( first_fcref_from != -1 )
  {
    v8 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v9 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v9 = (_QWORD *)v8[1];
LABEL_8:
      while ( v8 != v9 )
      {
        v10 = v9[11];
        if ( first_fcref_from == v10 && v10 != -1 )
          return v38 - __readfsqword(0x28u);
        if ( (*v9 & 2) != 0 )
        {
          v24 = v9[11];
          do
          {
            while ( v24 == -1 )
              ;
          }
          while ( first_fcref_from != v24 );
          return v38 - __readfsqword(0x28u);
        }
        v11 = (_QWORD *)v9[2];
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          v14 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
          v15 = *v14;
          if ( (*v14 & 2) == 0 )
          {
            while ( v9 == (_QWORD *)v14[2] )
            {
              v9 = v14;
              v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
              v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v15 & 2) != 0 )
              {
                v9 = (_QWORD *)v16;
                goto LABEL_8;
              }
              v14 = (_QWORD *)v16;
            }
          }
          v9 = v14;
        }
        else
        {
          do
          {
            v9 = v11;
            v11 = (_QWORD *)v11[1];
          }
          while ( (*(_BYTE *)v11 & 2) == 0 );
        }
      }
    }
    if ( v8 )
    {
      v17 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v17 = (_QWORD *)v8[1];
LABEL_30:
      while ( v8 != v17 )
      {
        v18 = v17[11];
        if ( v18 != -1 && v4 == v18 )
          goto LABEL_51;
        if ( (*v17 & 2) != 0 )
        {
          v25 = v17[11];
          do
          {
            while ( v25 == -1 )
              ;
          }
          while ( v4 != v25 );
LABEL_51:
          v26 = *(_QWORD *)(a2 + 800);
          v37[0] = -4294967290LL;
          v27 = 8 * *(_DWORD *)(*(_QWORD *)(v26 + 112) + 84LL);
          if ( (unsigned __int64)v27 <= 0x3F )
            first_fcref_from &= ~(-1LL << v27);
          v37[1] = first_fcref_from;
          sub_1D6450(a2, 55, (unsigned __int8 *)v37, nullptr, nullptr);
          sub_11CDA0((__int64)v37);
          return v38 - __readfsqword(0x28u);
        }
        v19 = (_QWORD *)v17[2];
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v21 = (_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFFCLL);
          v22 = *v21;
          if ( (*v21 & 2) == 0 )
          {
            while ( v17 == (_QWORD *)v21[2] )
            {
              v17 = v21;
              v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
              v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v22 & 2) != 0 )
              {
                v17 = (_QWORD *)v23;
                goto LABEL_30;
              }
              v21 = (_QWORD *)v23;
            }
          }
          v17 = v21;
        }
        else
        {
          for ( i = (_QWORD *)v19[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
            v19 = i;
          v17 = v19;
        }
      }
    }
    v28 = get_first_fcref_from();
    v29 = *(_QWORD **)a1;
    v30 = nullptr;
    if ( *(_QWORD *)a1 )
    {
      v30 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 8) )
        v30 = (_QWORD *)v29[1];
    }
LABEL_57:
    while ( v30 != v29 )
    {
      v31 = v30[11];
      if ( v28 == v31 && v31 != -1 )
        goto LABEL_51;
      if ( (*v30 & 2) != 0 )
      {
        v36 = v30[11];
        do
        {
          while ( v36 == -1 )
            ;
        }
        while ( v28 != v36 );
        goto LABEL_51;
      }
      v32 = (_QWORD *)v30[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v33 = (_QWORD *)(*v30 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          while ( (_QWORD *)v33[2] == v30 )
          {
            v30 = v33;
            v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) != 0 )
            {
              v30 = (_QWORD *)v35;
              goto LABEL_57;
            }
            v33 = (_QWORD *)v35;
          }
        }
        v30 = v33;
      }
      else
      {
        do
        {
          v30 = v32;
          v32 = (_QWORD *)v32[1];
        }
        while ( (*(_BYTE *)v32 & 2) == 0 );
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}

