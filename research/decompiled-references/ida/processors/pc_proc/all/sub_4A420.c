__int64 __fastcall sub_4A420(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r13
  unsigned __int64 v5; // r14
  unsigned int v6; // r9d
  char byte; // al
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  char v12; // al
  __int16 word; // ax
  unsigned __int8 v14; // r9
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 item_end; // rax
  char v22; // al
  unsigned __int8 v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+0h] [rbp-58h]
  unsigned __int16 v25; // [rsp+0h] [rbp-58h]
  unsigned __int8 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+0h] [rbp-58h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v29; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v30; // [rsp+Fh] [rbp-49h]

  if ( *(_WORD *)(a3 + 26) > 3u )
  {
    v4 = &unk_96D72;
    while ( *v4 == (unsigned __int8)get_byte() )
    {
      if ( &unk_96D75 == (_UNKNOWN *)++v4 )
      {
        v5 = *(_QWORD *)(a3 + 16);
        if ( v5 <= 1 )
          return 0;
        byte = get_byte();
        v9 = *(_QWORD *)(a3 + 16);
        if ( byte == -21 )
        {
          v10 = v9 - 2;
        }
        else
        {
          if ( v9 <= 2 || (unsigned __int8)get_byte() != 0xE9 )
            return 0;
          v10 = *(_QWORD *)(a3 + 16) - 3LL;
        }
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 && v10 > 0xE )
        {
          v11 = v10 - 15;
          v23 = equal_bytes();
          if ( v23 )
          {
            if ( v10 + (unsigned __int8)get_byte() - 4 == *(_QWORD *)(a3 + 16) )
            {
              v12 = get_byte();
              if ( v12 == -21 )
              {
                v30 = v23;
                v27 = *(_QWORD *)(a3 + 16);
                v22 = get_byte();
                v14 = v30;
                v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v27 + v22);
              }
              else
              {
                if ( v12 != -23 )
                  return 0;
                v28 = v23;
                v24 = *(_QWORD *)(a3 + 16);
                word = get_word();
                v14 = v28;
                v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v24 + word);
              }
              *(_QWORD *)(a2 + 24) = v15;
              v29 = v14;
              v25 = get_word();
              if ( (unsigned __int8)get_byte() == 2 * v25 )
              {
                *(_DWORD *)a2 |= 1u;
                *(_WORD *)(a2 + 4) = v25;
                *(_QWORD *)(a2 + 32) = v11;
                v16 = get_word();
                v6 = v29;
                v17 = v16 + 16LL * *(_QWORD *)a3;
                v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
                if ( v17 != v18 )
                {
                  if ( v17 == -1 )
                    v18 = -1;
                  else
                    v18 &= v17;
                }
                v19 = *(unsigned __int16 *)(a2 + 4);
                *(_QWORD *)(a2 + 16) = v18;
                v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v18 + 2 * v19);
                *(_DWORD *)(a2 + 64) = 0;
                *(_QWORD *)(a2 + 8) = v20;
                *(_BYTE *)(a2 + 68) = 1;
                if ( v11 < v5 )
                {
                  do
                  {
                    v26 = v6;
                    netnode_supset();
                    item_end = get_item_end();
                    v6 = v26;
                  }
                  while ( item_end < v5 );
                }
                return v6;
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

