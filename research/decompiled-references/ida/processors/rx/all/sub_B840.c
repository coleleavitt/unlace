char __fastcall sub_B840(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r15d
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  char v8; // al
  __int64 v9; // rbx
  char v10; // al
  bool v11; // al
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rsi
  __int64 ph; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r8
  __int64 *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 (__fastcall *v22)(__int64, __int64, __int64); // rax
  __int64 v23; // rsi
  __int64 v25; // [rsp+0h] [rbp-48h]
  unsigned int v26; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v3 = 0;
  if ( a2[1] )
  {
    do
    {
      v6 = 5 * v2;
      v7 = *a2 + 8 * v6;
      v8 = *(_BYTE *)(v7 + 1);
      if ( v8 == 1 )
      {
        if ( (unsigned __int8)sub_8370(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v7 + 6)) )
          goto LABEL_10;
        if ( *(_BYTE *)(v7 + 1) != 99 )
          goto LABEL_4;
      }
      else if ( v8 != 99 )
      {
        goto LABEL_4;
      }
      if ( (unsigned __int8)sub_84E0(*(_QWORD *)(a1 + 888), a1 + 16, v6) )
      {
LABEL_10:
        if ( !a2[1] )
          break;
        v9 = 0;
        while ( 2 )
        {
          v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
          v13 = 40 * v9 + *a2;
          if ( v12 == sub_B220 )
          {
            v10 = *(_BYTE *)(v13 + 1);
            if ( v10 != *(_BYTE *)(v7 + 1) )
              goto LABEL_19;
            switch ( v10 )
            {
              case 99:
                goto LABEL_18;
              case 100:
                v11 = *(_QWORD *)(v13 + 8) == *(_QWORD *)(v7 + 8);
                break;
              case 1:
                v11 = *(_WORD *)(v13 + 6) == *(_WORD *)(v7 + 6);
                break;
              default:
                goto LABEL_19;
            }
            if ( v11 )
              goto LABEL_18;
          }
          else if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v12)(
                      a1,
                      v13,
                      v7,
                      sub_B220) )
          {
            v13 = 40 * v9 + *a2;
LABEL_18:
            *(_BYTE *)(v13 + 1) = 0;
          }
LABEL_19:
          v5 = a2[1];
          if ( ++v9 >= v5 )
            goto LABEL_5;
          continue;
        }
      }
LABEL_4:
      v5 = a2[1];
LABEL_5:
      v2 = ++v3;
    }
    while ( v3 < v5 );
  }
  ph = get_ph();
  v15 = *(unsigned __int16 *)(a1 + 40);
  v16 = *(_DWORD *)(ph + 104);
  if ( v15 >= v16 && v15 < *(_DWORD *)(ph + 108) )
  {
    v17 = *(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * (v15 - v16) + 8);
    if ( (_DWORD)v17 )
    {
      v18 = qword_FA20;
      v19 = a1 + 56;
      v20 = a1 + 256;
      while ( 1 )
      {
        LODWORD(ph) = *(_DWORD *)v18 & v17;
        if ( (_DWORD)ph )
        {
          if ( *(_BYTE *)(v19 + 1) > 1u && a2[1] )
            break;
        }
LABEL_30:
        v19 += 40;
        v18 = (__int64 *)((char *)v18 + 4);
        if ( v20 == v19 )
          return ph;
      }
      v21 = 0;
      while ( 1 )
      {
        v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
        v23 = 40 * v21 + *a2;
        if ( v22 != sub_B220 )
        {
          v26 = v17;
          v25 = v20;
          LOBYTE(ph) = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v22)(
                         a1,
                         v23,
                         v19,
                         v20,
                         v17,
                         sub_B220);
          v20 = v25;
          v17 = v26;
          if ( !(_BYTE)ph )
            goto LABEL_41;
          v23 = 40 * v21 + *a2;
LABEL_40:
          *(_BYTE *)(v23 + 1) = 0;
          goto LABEL_41;
        }
        LOBYTE(ph) = *(_BYTE *)(v23 + 1);
        if ( (_BYTE)ph == *(_BYTE *)(v19 + 1) )
        {
          switch ( (_BYTE)ph )
          {
            case 0x63:
              goto LABEL_40;
            case 0x64:
              LOBYTE(ph) = *(_QWORD *)(v23 + 8) == *(_QWORD *)(v19 + 8);
              break;
            case 1:
              LOBYTE(ph) = *(_WORD *)(v23 + 6) == *(_WORD *)(v19 + 6);
              break;
            default:
              goto LABEL_41;
          }
          if ( (_BYTE)ph )
            goto LABEL_40;
        }
LABEL_41:
        if ( (unsigned __int64)++v21 >= a2[1] )
          goto LABEL_30;
      }
    }
  }
  return ph;
}

