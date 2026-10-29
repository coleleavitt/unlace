char __fastcall sub_124C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r8
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r12
  char v11; // al
  bool v12; // al
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rax
  __int64 v14; // rsi
  char v15; // al
  __int64 ph; // rax
  __int64 v17; // r9
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  _DWORD *v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 (__fastcall *v25)(__int64, __int64, __int64); // rax
  __int64 v26; // rsi
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+0h] [rbp-48h]
  unsigned __int64 v32; // [rsp+8h] [rbp-40h]
  unsigned int v33; // [rsp+8h] [rbp-40h]

  v4 = 0;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *a2 + 40 * v4;
      if ( *(_BYTE *)(v6 + 1) == 1 )
      {
        v32 = v5;
        v28 = a1;
        v7 = sub_12420(*(_QWORD *)(a1 + 888), (unsigned __int16 *)(a1 + 16), *(unsigned __int16 *)(v6 + 6), 0);
        a1 = v28;
        v5 = v32;
        if ( v7 )
          break;
      }
LABEL_3:
      if ( ++v4 >= v5 )
        goto LABEL_20;
    }
    v10 = 0;
    while ( 1 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
      v14 = v9 + 40 * v10;
      if ( v13 != sub_110E0 )
        break;
      v11 = *(_BYTE *)(v14 + 1);
      if ( v11 != *(_BYTE *)(v6 + 1) )
        goto LABEL_15;
      switch ( v11 )
      {
        case 99:
          goto LABEL_13;
        case 100:
          v12 = *(_QWORD *)(v14 + 8) == *(_QWORD *)(v6 + 8);
          break;
        case 1:
          v12 = *(_WORD *)(v14 + 6) == *(_WORD *)(v6 + 6);
          break;
        default:
          goto LABEL_15;
      }
      if ( v12 )
        goto LABEL_13;
LABEL_15:
      if ( ++v10 >= v5 )
        goto LABEL_3;
      v9 = *a2;
    }
    v29 = a1;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned __int64))v13)(a1, v14, v6, v8, v5);
    a1 = v29;
    if ( v15 )
    {
      v14 = *a2 + 40 * v10;
LABEL_13:
      *(_BYTE *)(v14 + 1) = 0;
    }
    v5 = a2[1];
    goto LABEL_15;
  }
LABEL_20:
  v30 = a1;
  ph = get_ph();
  v17 = v30;
  v18 = *(_DWORD *)(ph + 104);
  v19 = *(unsigned __int16 *)(v30 + 40);
  if ( v19 >= v18 && v19 < *(_DWORD *)(ph + 108) )
  {
    v20 = *(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * (v19 - v18) + 8);
    if ( (_DWORD)v20 )
    {
      v21 = &unk_23E00;
      v22 = v30 + 56;
      v23 = v30 + 176;
      while ( 1 )
      {
        LODWORD(ph) = *v21 & v20;
        if ( (_DWORD)ph )
        {
          if ( *(_BYTE *)(v22 + 1) > 1u && a2[1] )
            break;
        }
LABEL_26:
        v22 += 40;
        ++v21;
        if ( v22 == v23 )
          return ph;
      }
      v24 = 0;
      while ( 1 )
      {
        v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 8LL);
        v26 = 40 * v24 + *a2;
        if ( v25 != sub_110E0 )
        {
          v33 = v20;
          v31 = v17;
          LOBYTE(ph) = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v25)(
                         v17,
                         v26,
                         v22,
                         v20,
                         sub_110E0);
          v17 = v31;
          v20 = v33;
          if ( !(_BYTE)ph )
            goto LABEL_38;
          v26 = 40 * v24 + *a2;
LABEL_37:
          *(_BYTE *)(v26 + 1) = 0;
          goto LABEL_38;
        }
        LOBYTE(ph) = *(_BYTE *)(v26 + 1);
        if ( (_BYTE)ph == *(_BYTE *)(v22 + 1) )
        {
          switch ( (_BYTE)ph )
          {
            case 0x63:
              goto LABEL_37;
            case 0x64:
              LOBYTE(ph) = *(_QWORD *)(v26 + 8) == *(_QWORD *)(v22 + 8);
              break;
            case 1:
              LOBYTE(ph) = *(_WORD *)(v26 + 6) == *(_WORD *)(v22 + 6);
              break;
            default:
              goto LABEL_38;
          }
          if ( (_BYTE)ph )
            goto LABEL_37;
        }
LABEL_38:
        if ( ++v24 >= (unsigned __int64)a2[1] )
          goto LABEL_26;
      }
    }
  }
  return ph;
}

