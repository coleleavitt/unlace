__int64 __fastcall sub_49EC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned __int64 v4; // r14
  unsigned int v6; // r15d
  __int16 v8; // r13
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 defjump_from_table; // rax
  unsigned __int64 *fchunk; // rax
  unsigned __int64 insn; // r13
  char v16; // al
  __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // [rsp+0h] [rbp-100h]
  __int64 v22; // [rsp+0h] [rbp-100h]
  char v23; // [rsp+Fh] [rbp-F1h]
  unsigned __int64 v24; // [rsp+10h] [rbp-F0h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  _OWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __m128i si128; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  _QWORD v32[13]; // [rsp+98h] [rbp-68h] BYREF

  v3 = *(_BYTE *)(a3 + 41);
  v4 = *(_QWORD *)(a3 + 16);
  v32[5] = __readfsqword(0x28u);
  v27 = 0;
  memset(v26, 0, sizeof(v26));
  if ( v3 == 4 )
  {
    v10 = *(_DWORD *)(a3 + 72);
    v26[0] = _mm_loadu_si128((const __m128i *)(a3 + 40));
    v27 = v10;
    v26[1] = _mm_loadu_si128((const __m128i *)(a3 + 56));
  }
  else
  {
    if ( v3 != 1 )
      return 0;
    v8 = *(_WORD *)(a3 + 46);
    if ( decode_prev_insn() == -1 || *(_BYTE *)(a3 + 41) != 1 || v8 != *(_WORD *)(a3 + 46) || *(_BYTE *)(a3 + 81) != 4 )
      return 0;
    v9 = *(_DWORD *)(a3 + 112);
    v26[0] = _mm_loadu_si128((const __m128i *)(a3 + 80));
    v27 = v9;
    v26[1] = _mm_loadu_si128((const __m128i *)(a3 + 96));
  }
  if ( WORD3(v26[0]) == 5 )
  {
    v11 = *(_QWORD *)(a3 + 16);
    if ( v11 > 0x11 )
    {
      v12 = v11 - 18;
      v6 = equal_bytes();
      if ( (_BYTE)v6 )
      {
        *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFF398 | 0x63;
        *(_QWORD *)(a2 + 8) = sub_80350(a1, a3, v26);
        defjump_from_table = find_defjump_from_table();
        *(_QWORD *)(a2 + 24) = defjump_from_table;
        if ( defjump_from_table != -1 )
        {
          fchunk = (unsigned __int64 *)get_fchunk();
          if ( !fchunk )
          {
            fchunk = (unsigned __int64 *)get_prev_fchunk();
            if ( !fchunk )
              fchunk = (unsigned __int64 *)getseg();
          }
          v24 = *fchunk;
          if ( v12 >= *fchunk )
          {
            v23 = 0;
            v25 = 0;
            v21 = 0;
            while ( 1 )
            {
              while ( 1 )
              {
                insn = decode_prev_insn();
                if ( insn == -1 )
                  return 0;
                if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
                  return 0;
                if ( v21 )
                {
                  LODWORD(v32[0]) = 7;
                  if ( (unsigned int)sub_73130(a1, a3, v32, 1) != -1 )
                    return 0;
                }
                if ( v23 )
                  break;
                if ( *(_WORD *)(a3 + 24) == 122 && (*(_WORD *)(a3 + 28) & 0x387) == 0 )
                  goto LABEL_39;
                if ( insn < v24 )
                  return 0;
              }
              LODWORD(v32[0]) = 1;
              if ( (unsigned int)sub_73130(a1, a3, v32, 1) != -1 )
                return 0;
              if ( *(_WORD *)(a3 + 24) == 122 && (*(_WORD *)(a3 + 28) & 0x387) == 0 )
              {
LABEL_39:
                if ( *(_BYTE *)(a3 + 81) == 5 && *(_BYTE *)(a3 + 41) == 1 )
                {
                  v18 = *(_WORD *)(a3 + 46);
                  if ( v18 == 7 )
                  {
                    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
                    v25 = v19 & (*(_QWORD *)(a3 + 88) + 2LL);
                    v20 = v25 + 16LL * *(_QWORD *)a3;
                    if ( v20 != v19 )
                    {
                      if ( v20 == -1 )
                        v19 = -1;
                      else
                        v19 &= v20;
                    }
                    *(_QWORD *)(a2 + 16) = v19;
                    v21 = v6;
                  }
                  else if ( v18 == 1 )
                  {
                    *(_WORD *)(a2 + 4) = *(_WORD *)(a3 + 88) - 1;
                    sub_48740(*(_QWORD *)(a3 + 16), 1);
                    v23 = v6;
                  }
                }
              }
              v16 = v23 & v21;
              if ( insn < v24 )
              {
                if ( !v16 )
                  return 0;
LABEL_31:
                *(_QWORD *)(a2 + 32) = insn;
                v17 = getseg();
                v28 = 0;
                v22 = v17;
                v30 = 0;
                v31 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
                if ( v17 && (!(unsigned __int8)get_fixup() || (v28 & 0x400000000LL) != 0) )
                {
                  v32[1] = 0;
                  v32[0] = 0x800000001LL;
                  v32[2] = *(_QWORD *)(v22 + 48);
                  v32[4] = -2;
                  v32[3] = v25;
                  set_fixup();
                  op_offset();
                }
                get_default_reftype();
                op_offset();
                *(_BYTE *)(a2 + 68) = 1;
                *(_DWORD *)(a2 + 64) = 0;
                if ( insn < v4 )
                {
                  do
                  {
                    LOBYTE(v32[0]) = 3;
                    netnode_supset();
                  }
                  while ( get_item_end() < v4 );
                }
                return v6;
              }
              if ( v16 )
                goto LABEL_31;
            }
          }
        }
      }
    }
  }
  return 0;
}

