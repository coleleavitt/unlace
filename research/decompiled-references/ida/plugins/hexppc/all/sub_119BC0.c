__int64 __fastcall sub_119BC0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r11
  bool v8; // al
  bool v9; // dl
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  bool v14; // di
  bool v15; // r8
  unsigned int v16; // edx
  _DWORD *v18; // rax
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // rdi
  bool v22; // si
  bool v23; // r8

  v4 = *a1;
  v5 = *a2;
  v6 = *a1 + 24 * a1[1];
  v7 = *a2 + 24 * a2[1];
  v8 = *a1 != v6;
  v9 = *a2 != v7;
  if ( *a2 == v7 || *a1 == v6 )
  {
LABEL_17:
    if ( v4 != v6 || !v9 )
    {
      if ( v5 == v7 )
      {
        v16 = 1;
        if ( v8 )
          return v16;
      }
      v18 = (_DWORD *)a1[3];
      v19 = (_DWORD *)a2[3];
      v20 = &v18[a1[4]];
      v21 = &v19[a2[4]];
      v22 = v18 != v20;
      v23 = v19 != v21;
      if ( v19 == v21 || v18 == v20 )
      {
LABEL_27:
        if ( v20 != v18 )
          return v22 & (unsigned __int8)(v21 == v19);
        v16 = -1;
        if ( !v23 )
          return v22 & (unsigned __int8)(v21 == v19);
        return v16;
      }
      while ( *v18 >= *v19 )
      {
        if ( *v18 > *v19 )
          return 1;
        ++v18;
        ++v19;
        v22 = v20 != v18;
        v23 = v21 != v19;
        if ( v20 == v18 || v21 == v19 )
          goto LABEL_27;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD **)v4;
      v11 = *(_QWORD **)v5;
      v12 = *(_QWORD *)v4 + 8LL * *(_QWORD *)(v4 + 8);
      v13 = *(_QWORD *)v5 + 8LL * *(_QWORD *)(v5 + 8);
      v14 = *(_QWORD *)v4 != v12;
      v15 = *(_QWORD *)v5 != v13;
      if ( *(_QWORD *)v4 != v12 )
      {
        while ( v15 )
        {
          if ( *v10 < *v11 )
            return (unsigned int)-1;
          if ( *v10 > *v11 )
            return 1;
          ++v10;
          ++v11;
          v14 = v12 != (_QWORD)v10;
          v15 = v13 != (_QWORD)v11;
          if ( (_QWORD *)v12 == v10 )
            break;
        }
      }
      if ( v10 == (_QWORD *)v12 && v15 )
        break;
      if ( v11 == (_QWORD *)v13 && v14 )
        return 1;
      v4 += 24;
      v5 += 24;
      v8 = v6 != v4;
      v9 = v7 != v5;
      if ( v6 == v4 || v7 == v5 )
        goto LABEL_17;
    }
  }
  return (unsigned int)-1;
}

