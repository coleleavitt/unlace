bool __fastcall sub_367C0(__int64 a1, int *a2, _QWORD *a3)
{
  __int64 *v3; // r15
  __int64 tinfo_size; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  char tinfo_property; // al
  int v12; // edx
  int v13; // eax
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int16 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  struct _Unwind_Exception *v24; // rbx

  if ( (get_tinfo_property(*a3, 2) & 0x3F) == 1 )
    return 1;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v8 = *(_DWORD *)(a1 + 120);
  v9 = tinfo_size;
  if ( v8 > 5 )
    goto LABEL_52;
  if ( ((1LL << v8) & 0x29) != 0 )
  {
    v10 = 4;
    goto LABEL_7;
  }
  if ( ((1LL << v8) & 0x16) == 0 )
  {
LABEL_52:
    v24 = (struct _Unwind_Exception *)sub_28E30();
    if ( v3 )
      sub_19E42(v3);
    _Unwind_Resume(v24);
  }
  v10 = 8;
LABEL_7:
  tinfo_property = get_tinfo_property(*a3, 2);
  v12 = *(_DWORD *)(a1 + 120);
  if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
  {
    if ( v12 != 5 )
    {
      if ( (get_tinfo_property(*a3, 2) & 0xF) == 9 )
      {
        if ( v10 < v9 )
        {
          if ( v10 == 4 )
          {
            *a2 = 4;
            a2[2] = 2162720;
          }
          else if ( a2 )
          {
            if ( (unsigned __int8)getinf_flag(3, 32) )
            {
              cleanup_argloc(a2);
              *a2 = 4;
              a2[2] = 2097186;
            }
            else
            {
              cleanup_argloc(a2);
              *a2 = 4;
              a2[2] = 2228256;
            }
          }
        }
        else
        {
          *a2 = 3;
          a2[2] = 32;
        }
        return 1;
      }
      if ( v10 < v9 )
      {
        if ( a2 )
        {
          if ( (unsigned __int8)getinf_flag(3, 32) )
          {
            cleanup_argloc(a2);
            *a2 = 4;
            a2[2] = (int)&loc_20003;
          }
          else
          {
            cleanup_argloc(a2);
            *a2 = 4;
            a2[2] = 196610;
          }
        }
        goto LABEL_16;
      }
LABEL_20:
      *a2 = 3;
      a2[2] = 2;
      goto LABEL_16;
    }
    if ( v10 < v9 )
    {
      if ( a2 )
      {
        if ( (unsigned __int8)getinf_flag(3, 32) )
        {
          cleanup_argloc(a2);
          *a2 = 4;
          a2[2] = 262149;
        }
        else
        {
          cleanup_argloc(a2);
          *a2 = 4;
          a2[2] = (int)"pcnt.h";
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( v12 == 5 )
  {
    if ( 8 * (unsigned __int64)(v10 != 4) + 8 < v9 || (get_tinfo_property(*a3, 2) & 0x2F) != 0xD )
      goto LABEL_12;
    if ( v10 < v9 )
    {
      *a2 = 4;
      a2[2] = (int)"pcnt.h";
      goto LABEL_16;
    }
LABEL_15:
    *a2 = 3;
    a2[2] = 4;
LABEL_16:
    sub_32C00((int *)(a1 + 120), a2, a3, -1);
    return 1;
  }
  if ( (unsigned int)(v12 - 1) > 1 )
  {
    if ( v12 == 3 && 8 * (unsigned __int64)(v10 != 4) + 8 >= v9 && (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
    {
      if ( v10 < v9 )
        goto LABEL_28;
      goto LABEL_20;
    }
LABEL_12:
    *a2 = 3;
    a2[2] = 2;
    return 1;
  }
  v13 = sub_36480(a2, a3, v9, v10);
  switch ( v13 )
  {
    case 3:
LABEL_28:
      v14 = qalloc_or_throw(24);
      *(_OWORD *)(v14 + 8) = 0;
      v15 = (__int64 *)v14;
      *(_QWORD *)v14 = 0;
      v16 = qvector_reserve(v14, 0, 1, 24);
      v17 = v15[1];
      *v15 = v16;
      v18 = v10;
      v19 = v16 + 24 * v17;
      *(_DWORD *)(v19 + 16) = 0xFFFF;
      *(_QWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0;
      ++v15[1];
      *(_DWORD *)v19 = 3;
      *(_DWORD *)(v19 + 8) = 2;
      *(_WORD *)(v19 + 16) = 0;
      *(_WORD *)(v19 + 18) = v10;
      v20 = v15[1];
      v21 = *v15;
      if ( v15[2] < (unsigned __int64)(v20 + 1) )
      {
        v23 = qvector_reserve(v15, v21, v20 + 1, 24);
        v20 = v15[1];
        v18 = v10;
        *v15 = v23;
        v21 = v23;
      }
      v22 = v21 + 24 * v20;
      *(_DWORD *)(v22 + 16) = 0xFFFF;
      *(_QWORD *)v22 = 0;
      *(_QWORD *)(v22 + 8) = 0;
      ++v15[1];
      *(_DWORD *)v22 = 3;
      *(_DWORD *)(v22 + 8) = 3;
      *(_WORD *)(v22 + 16) = v18;
      *(_WORD *)(v22 + 18) = v9 - v18;
      cleanup_argloc(a2);
      if ( v15 )
      {
        *a2 = 2;
        *((_QWORD *)a2 + 1) = v15;
      }
      goto LABEL_16;
    case 4:
      goto LABEL_12;
    case 1:
      goto LABEL_16;
  }
  return v13 == 2;
}
