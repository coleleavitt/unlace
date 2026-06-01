__int64 __fastcall sub_228210(__int64 a1, __int64 a2, _QWORD *a3, int a4, double a5)
{
  _QWORD *v5; // rbx
  int v6; // r14d
  char tinfo_property; // al
  __int64 v8; // r13
  __int64 v9; // rdx
  int v10; // r15d
  _QWORD *v11; // rdx
  int v12; // ebx
  int v14; // eax
  int v15; // r13d
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  char v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v5 = a3;
  v20 = __readfsqword(0x28u);
  v6 = a4;
  if ( !a3 )
  {
    v8 = *(_QWORD *)(a1 + 1504);
    if ( (*(_BYTE *)(v8 + 50) & 8) != 0 )
    {
      if ( a4 > 16 )
        goto LABEL_26;
    }
    else
    {
      v14 = 2 * *(_DWORD *)(v8 + 80);
      if ( a4 > v14 )
        goto LABEL_17;
    }
    if ( !sub_11CA80(a4) && !sub_11CB40(v6) )
    {
      v15 = sub_11CA90(v6, a5);
LABEL_32:
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL);
      if ( (unsigned __int8)getinf() )
        LODWORD(v17) = (unsigned __int8)getinf();
      else
        v17 = *(_QWORD *)(v16 + 120);
      if ( v6 < (int)v17 && v15 > (int)v17 )
      {
        v9 = *(_QWORD *)(a1 + 1504);
        v6 = v17;
        v5 = nullptr;
        goto LABEL_3;
      }
LABEL_41:
      v9 = *(_QWORD *)(a1 + 1504);
      if ( v15 != v6 )
      {
        v6 = v15;
        v5 = nullptr;
      }
LABEL_3:
      v10 = *(_DWORD *)(v9 + 80);
      v11 = v5;
      v18 = a2;
      v12 = v6;
      v19 = 5;
      if ( !(unsigned __int8)sub_227ED0(a1, (__int64)&v18, v11, v6, a5) )
      {
        v12 = v6 / 2;
        if ( v6 > 1 )
          goto LABEL_7;
LABEL_18:
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && (v12 = 2 * v6, v10 >= 2 * v6) )
        {
          while ( 1 )
          {
            v18 = a2;
            v19 = 5;
            if ( (unsigned __int8)sub_227ED0(a1, (__int64)&v18, nullptr, v12, a5) )
              break;
            v12 *= 2;
            if ( v10 < v12 )
              return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      return (unsigned int)v12;
    }
LABEL_14:
    v9 = *(_QWORD *)(a1 + 1504);
    goto LABEL_3;
  }
  tinfo_property = get_tinfo_property();
  v8 = *(_QWORD *)(a1 + 1504);
  v9 = v8;
  if ( (tinfo_property & 0x2F) == 0xD )
    goto LABEL_3;
  if ( (*(_BYTE *)(v8 + 50) & 8) == 0 )
  {
    v14 = 2 * *(_DWORD *)(v8 + 80);
    if ( v6 <= v14 )
      goto LABEL_11;
LABEL_17:
    v9 = v8;
    v6 = v14;
    v5 = nullptr;
    goto LABEL_3;
  }
  if ( v6 <= 16 )
  {
LABEL_11:
    if ( ((get_tinfo_property() & 0x2F) != 0xD || (*(_BYTE *)(v8 + 48) & 0x20) == 0)
      && !sub_11CA80(v6)
      && ((unsigned __int8)*v5 && (get_tinfo_property() & 0xF) != 9 || !sub_11CB40(v6)) )
    {
      v15 = sub_11CA90(v6, a5);
      if ( (unsigned __int8)*v5 && (get_tinfo_property() & 0xF) != 9 )
        goto LABEL_41;
      goto LABEL_32;
    }
    goto LABEL_14;
  }
LABEL_26:
  v10 = *(_DWORD *)(v8 + 80);
  v18 = a2;
  v12 = 16;
  v19 = 5;
  if ( !(unsigned __int8)sub_227ED0(a1, (__int64)&v18, nullptr, 16, a5) )
  {
    v6 = 16;
    v12 = 8;
LABEL_7:
    while ( 1 )
    {
      v18 = a2;
      v19 = 5;
      if ( (unsigned __int8)sub_227ED0(a1, (__int64)&v18, nullptr, v12, a5) )
        break;
      v12 >>= 1;
      if ( !v12 )
        goto LABEL_18;
    }
  }
  return (unsigned int)v12;
}

