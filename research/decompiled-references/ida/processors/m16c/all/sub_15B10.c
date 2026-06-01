__int64 __fastcall sub_15B10(_QWORD *a1, __int64 a2)
{
  char v3; // r13
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 *v7; // r12
  unsigned int v8; // ebp
  char v9; // r15
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // r12
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int16 v17; // ax

  if ( !*(_BYTE *)(a2 + 33) )
  {
    switch ( *(_BYTE *)(a2 + 1) )
    {
      case 0:
        return 1;
      case 1:
        v3 = 0;
LABEL_27:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        goto LABEL_9;
      case 2:
        v3 = 0;
LABEL_39:
        v12 = *(_QWORD *)(a2 + 16);
        v4 = 16 * calc_dataseg() + v12;
        goto LABEL_7;
      case 3:
        v3 = 0;
        goto LABEL_36;
      case 4:
        v3 = 0;
LABEL_31:
        v10 = 196;
        v11 = *(_WORD *)(a2 + 6);
        if ( (unsigned __int16)(v11 - 29) > 1u )
        {
          v10 = 193;
          if ( v11 != 28 )
          {
            v10 = 196;
            if ( *(_DWORD *)(a1[77] + 4328LL) != 6 )
              v10 = 193;
          }
        }
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v10);
LABEL_36:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
        goto LABEL_9;
      case 5:
        v3 = 0;
LABEL_43:
        v13 = a1[77];
        if ( *(_BYTE *)(v13 + 4373)
          && (v16 = (_BYTE *)sub_17C60(v13, a1[40], *(unsigned int *)(a2 + 8))) != nullptr
          && *v16 )
        {
          (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v16, 34);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
          v14 = *(_BYTE *)(a2 + 1);
          if ( v14 == 4 )
          {
            v17 = *(_WORD *)(a2 + 6);
            v15 = 196;
            if ( (unsigned __int16)(v17 - 29) > 1u )
            {
              v15 = 193;
              if ( v17 != 28 )
              {
                v15 = 196;
                if ( *(_DWORD *)(a1[77] + 4328LL) != 6 )
                  v15 = 193;
              }
            }
          }
          else
          {
            v15 = 0;
            if ( v14 == 5 )
              v15 = (*(_BYTE *)(a2 + 24) & 1) == 0 ? 1 : 4;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v15);
        }
        goto LABEL_9;
      case 6:
      case 7:
        v3 = 0;
LABEL_6:
        v4 = *(_QWORD *)(a2 + 16);
LABEL_7:
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v4, -1) )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, v4, 16);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
          remember_problem();
        }
        goto LABEL_9;
      case 8:
        v3 = 0;
LABEL_41:
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(
          a1,
          (unsigned int)*((char *)&qword_1C280 + *(_QWORD *)(a2 + 8)));
        goto LABEL_9;
      case 9:
        v3 = 0;
LABEL_17:
        v6 = *(_QWORD *)(a2 + 8);
        v7 = qword_1C260;
        v8 = 7;
        if ( *(_DWORD *)(a1[77] + 4328LL) == 6 )
        {
          v8 = 8;
          v7 = qword_1C220;
        }
        LODWORD(v6) = (unsigned __int16)v6;
        v9 = 0;
        do
        {
          if ( _bittest((const int *)&v6, v8) )
          {
            if ( v9 )
              (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v9;
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(int *)v7),
              33);
          }
          --v8;
          v7 = (__int64 *)((char *)v7 + 4);
        }
        while ( v8 != -1 );
LABEL_9:
        if ( v3 )
LABEL_10:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
        return 1;
      case 0xA:
        if ( (*((_BYTE *)a1 + 254) & 0x10) != 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 67);
        return 1;
      default:
        return 0;
    }
  }
  if ( *(_DWORD *)(a1[77] + 4328LL) != 6 || *(_BYTE *)(a2 + 1) != 1 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
    switch ( *(_BYTE *)(a2 + 1) )
    {
      case 0:
        goto LABEL_10;
      case 1:
        v3 = 1;
        goto LABEL_27;
      case 2:
        v3 = 1;
        goto LABEL_39;
      case 3:
        v3 = 1;
        goto LABEL_36;
      case 4:
        v3 = 1;
        goto LABEL_31;
      case 5:
        v3 = 1;
        goto LABEL_43;
      case 6:
      case 7:
        v3 = 1;
        goto LABEL_6;
      case 8:
        v3 = 1;
        goto LABEL_41;
      case 9:
        v3 = 1;
        goto LABEL_17;
      case 0xA:
        if ( (*((_BYTE *)a1 + 254) & 0x10) != 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 67);
        goto LABEL_10;
      default:
        return 0;
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
    a1,
    *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
    33);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 66);
  return 1;
}

