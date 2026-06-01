__int64 __fastcall sub_13C7E0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, unsigned int a6, __m128i a7)
{
  unsigned int v7; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // eax
  int flags; // eax
  int v24; // r8d
  __int64 v25; // rdx
  char data_value; // al
  int v27; // r8d
  unsigned __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 *v31; // rdi
  __int16 v32; // ax
  int v33; // r8d
  __int16 v34; // bx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 _64bit; // rax
  int v40; // [rsp+18h] [rbp-98h]
  int v41; // [rsp+18h] [rbp-98h]
  int v42; // [rsp+18h] [rbp-98h]
  __int64 v43; // [rsp+20h] [rbp-90h]
  unsigned __int8 v45; // [rsp+28h] [rbp-88h]
  unsigned __int64 v46; // [rsp+38h] [rbp-78h]
  char v47[16]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int8 v48[40]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-38h]

  v11 = *(_QWORD *)(a1 + 64);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v49 = __readfsqword(0x28u);
  v13 = a6;
  v43 = v12;
  if ( !sub_1345B0(nullptr, v11, a5, a6)
    && ((int)v13 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 84LL)
     || *(_BYTE *)a5 != 10
     || **(_BYTE **)(a5 + 8) != 6
     || (v19 = getseg()) == 0
     || *(_BYTE *)(v19 + 184) != 1) )
  {
    LOBYTE(v7) = (_DWORD)v13 != -1 && (unsigned int)(*a3 - 1) > 1;
    if ( (_BYTE)v7 )
    {
      if ( !under_debugger )
        sub_383060(0xCCDDu, *(double *)a7.m128i_i64);
      goto LABEL_73;
    }
    sub_123A40((__int64)v47, (unsigned __int8 *)a2, v14, v15);
    if ( (*(_BYTE *)(a5 + 1) & 0x20) != 0 )
    {
      v17 = *a3;
      if ( *a3 == 2 )
      {
LABEL_12:
        if ( (int *)a5 != a3 + 12 )
          goto LABEL_13;
        goto LABEL_15;
      }
      if ( v17 != 1 && v17 != 54 )
      {
        if ( v17 != 57 )
        {
LABEL_13:
          sub_11CDA0((__int64)v47);
          return v7;
        }
        goto LABEL_12;
      }
      if ( (int *)a5 != a3 + 16 )
        goto LABEL_13;
    }
LABEL_15:
    v45 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, __int64, __int64, __int64))(*(_QWORD *)v43 + 24LL))(
            v43,
            a2,
            *(_QWORD *)(a1 + 64),
            a3,
            a4,
            a5,
            v13);
    if ( !v45 )
      goto LABEL_13;
    if ( *(_BYTE *)a2 != 5 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      goto LABEL_18;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
    if ( v20 >= 0 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v20 >= *(_QWORD *)(v18 + 128) )
      {
        sub_11CA10((char *)a2, v47);
        goto LABEL_13;
      }
LABEL_18:
      if ( sub_1345B0(nullptr, v18, a2, v13) )
        goto LABEL_13;
      *(_DWORD *)(a2 + 4) = v13;
      if ( (_DWORD)v13 == -1 || *(_BYTE *)a2 != 6 )
      {
LABEL_21:
        v7 = v45;
        sub_11CDA0((__int64)v47);
        return v7;
      }
      if ( (unsigned __int8)sub_342B40(*(_QWORD *)(a1 + 480), *(_QWORD *)(a2 + 8), (int)v13) )
        a3[1] |= 0x20000u;
      v21 = *(_QWORD *)(a2 + 8);
      if ( !v21 )
      {
        if ( !sub_32A760(*(_QWORD *)(a1 + 480)) )
          goto LABEL_21;
        v21 = *(_QWORD *)(a2 + 8);
      }
      v22 = sub_343460(*(_QWORD *)(a1 + 480), v21, (int)v13);
      if ( !v22 )
        goto LABEL_21;
      if ( *a3 == 1 )
      {
        sub_3311F0(*(_QWORD **)(a1 + 64), *((_QWORD *)a3 + 3), 0x18u, *(_QWORD *)(a2 + 8), (unsigned int)v22);
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v43 + 49) & 4) == 0 && v22 <= 1 )
        goto LABEL_21;
      v40 = v22;
      if ( (unsigned __int8)is_spec_ea() )
        goto LABEL_21;
      flags = get_flags_ex();
      v24 = v40;
      v25 = flags & 0x600;
      if ( v25 == 512 )
      {
        v32 = get_flags_ex();
        v33 = v40;
        if ( (v32 & 0x600) == 0x200 )
        {
          prev_not_tail();
          v33 = v40;
        }
        v42 = v33;
        flags = get_flags_ex();
        v24 = v42;
        if ( (_DWORD)v13 != *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) && (_DWORD)v13 != *(_DWORD *)(v43 + 84) )
          goto LABEL_21;
        v25 = flags & 0x600;
      }
      else if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL) != (_DWORD)v13
             && (_DWORD)v13 != *(_DWORD *)(v43 + 84) )
      {
        if ( v25 != 1024 || (flags & 0xE0000000) != 0x80000000LL )
          goto LABEL_21;
        goto LABEL_44;
      }
      if ( v25 != 1024 )
      {
        if ( v25 == 1536 )
          goto LABEL_21;
        goto LABEL_45;
      }
LABEL_44:
      if ( (flags & 0xF0000000) == 0x50000000 )
        goto LABEL_21;
LABEL_45:
      v41 = v24;
      data_value = get_data_value();
      v27 = v41;
      if ( data_value )
      {
        v28 = v46;
        if ( (int)v13 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL) )
        {
          _64bit = get_64bit();
          v27 = v41;
          v28 = _64bit;
        }
        if ( v27 == 3 )
        {
          v34 = get_flags_ex();
          if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v43 + 84) )
          {
            v35 = v34 & 0x200;
            if ( !(_DWORD)v35
              && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL) >= v28
              && (unsigned __int8)is_mapped() )
            {
              *(_BYTE *)a2 = 6;
              v37 = (unsigned int)(8 * *(_DWORD *)(v43 + 84));
              if ( (unsigned __int64)(int)v37 <= 0x3F )
                v35 = 1LL << (8 * *(_BYTE *)(v43 + 84));
              *(_QWORD *)(a2 + 8) = v28 & (v35 - 1);
              sub_11C950((unsigned __int8 *)a2, v43, v36, v37, *(double *)a7.m128i_i64);
            }
          }
        }
        else
        {
          v29 = 10;
          v30 = *(_QWORD *)(a2 + 8);
          v31 = v48;
          while ( v29 )
          {
            *(_DWORD *)v31 = 0;
            v31 += 4;
            --v29;
          }
          sub_120BF0(a2, *(_QWORD *)(a1 + 480), v30, v48, v28, v13, a7, 0, *((_QWORD *)a3 + 3));
        }
      }
      goto LABEL_21;
    }
    if ( !under_debugger )
      sub_383060(0xC509u, *(double *)a7.m128i_i64);
LABEL_73:
    BUG();
  }
  return 0;
}

