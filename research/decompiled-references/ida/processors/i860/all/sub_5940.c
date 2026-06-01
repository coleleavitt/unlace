__int64 __fastcall sub_5940(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  __int64 result; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 *v13; // rdx
  unsigned int v14; // edx
  __int64 *v15; // rcx
  unsigned int v16; // edx
  __int64 *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rdx
  unsigned int v23; // edx
  __int64 *v24; // rcx
  unsigned int v25; // edx
  __int64 *v26; // rcx
  unsigned int v27; // edx
  __int64 **v28; // rcx
  __int64 *v29; // rcx
  _QWORD **v30; // rcx

  if ( a2 > 19 )
  {
    if ( a2 == 86 )
    {
      *(_DWORD *)(a1 + 120) = 1 - (((unsigned int)sub_57B0(*(_QWORD *)(a1 + 16)) == 0) - 1);
      return 0;
    }
    return 0;
  }
  if ( a2 <= 1 )
    return 0;
  switch ( a2 )
  {
    case 2LL:
      v6 = *(_DWORD *)a3;
      if ( v6 > 0x2F )
      {
        v7 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v7 + 2;
      }
      else
      {
        v7 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v6);
        *(_DWORD *)a3 = v6 + 8;
      }
      *(_DWORD *)(a1 + 120) = 1 - ((*v7 == 0) - 1);
      return 0;
    case 10LL:
      v16 = *(_DWORD *)a3;
      if ( v16 > 0x2F )
      {
        v17 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v17 + 1;
      }
      else
      {
        v17 = (__int64 *)(*(_QWORD *)(a3 + 16) + v16);
        *(_DWORD *)a3 = v16 + 8;
      }
      return (int)sub_39E0(a1, *v17);
    case 11LL:
      v23 = *(_DWORD *)a3;
      if ( v23 > 0x2F )
      {
        v24 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v24 + 1;
      }
      else
      {
        v24 = (__int64 *)(*(_QWORD *)(a3 + 16) + v23);
        *(_DWORD *)a3 = v23 + 8;
      }
      if ( !(unsigned int)sub_42A0(a1, *v24, a4) )
        goto LABEL_26;
      goto LABEL_12;
    case 12LL:
      v14 = *(_DWORD *)a3;
      if ( v14 > 0x2F )
      {
        v15 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v15 + 1;
      }
      else
      {
        v15 = (__int64 *)(*(_QWORD *)(a3 + 16) + v14);
        *(_DWORD *)a3 = v14 + 8;
      }
      sub_5370(*v15);
      goto LABEL_12;
    case 13LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v26 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 1;
      }
      else
      {
        v26 = (__int64 *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      sub_5500(a1, *v26);
      goto LABEL_12;
    case 14LL:
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v29 = *(__int64 **)(a3 + 8);
        v22 = v29 + 1;
        *(_QWORD *)(a3 + 8) = v29 + 1;
        v21 = *v29;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        v20 = v18 + 8;
        *(_DWORD *)a3 = v20;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)v20 <= 0x2F )
        {
          v22 = (__int64 *)(v20 + v19);
          *(_DWORD *)a3 = v18 + 16;
          goto LABEL_22;
        }
        v22 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v22 + 1;
LABEL_22:
      sub_5390(a1, v21, *v22);
      goto LABEL_12;
    case 17LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v28 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (__int64 **)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      sub_5360(*v28);
      goto LABEL_12;
    case 19LL:
      v9 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v30 = *(_QWORD ***)(a3 + 8);
        v13 = (__int64 *)(v30 + 1);
        *(_QWORD *)(a3 + 8) = v30 + 1;
        v12 = *v30;
      }
      else
      {
        v10 = *(_QWORD *)(a3 + 16);
        v11 = v9 + 8;
        *(_DWORD *)a3 = v11;
        v12 = *(_QWORD **)(v10 + v9);
        if ( (unsigned int)v11 <= 0x2F )
        {
          v13 = (__int64 *)(v11 + v10);
          *(_DWORD *)a3 = v9 + 16;
          goto LABEL_11;
        }
        v13 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v13 + 1;
LABEL_11:
      if ( (unsigned __int8)sub_4860(v12, *v13, a4) )
LABEL_12:
        result = 1;
      else
LABEL_26:
        result = -1;
      break;
    default:
      return 0;
  }
  return result;
}

