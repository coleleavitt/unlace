unsigned __int64 __fastcall sub_1230(__int64 a1)
{
  __int64 *first_seg; // r12
  int v3; // r13d
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // r14
  unsigned __int8 byte; // al
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v14; // [rsp+20h] [rbp-10058h] BYREF
  __int16 v15; // [rsp+22h] [rbp-10056h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-10054h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10050h] BYREF
  _BYTE v18[65544]; // [rsp+30h] [rbp-10048h] BYREF
  unsigned __int64 v19; // [rsp+10038h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  qfwrite(a1, &unk_20E0, 49);
  first_seg = (__int64 *)get_first_seg();
  if ( first_seg )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = -1;
      v5 = 0;
      memset(v18, 0, 0x10000u);
      v6 = *first_seg;
      if ( *first_seg < (unsigned __int64)first_seg[1] )
        break;
LABEL_13:
      first_seg = (__int64 *)get_next_seg();
      if ( !first_seg )
        goto LABEL_14;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)is_loaded(v6) )
      {
        if ( v5 )
        {
          byte = get_byte(v6);
          v8 = v5 + 1;
          v18[v5] = byte;
          v3 += byte;
          v9 = first_seg[1];
          if ( v9 - 1 == v6 )
          {
            v11 = (unsigned __int8)v8;
            LOWORD(v10) = BYTE1(v8);
          }
          else
          {
            if ( v5 != 0xFFFF )
            {
              ++v5;
              goto LABEL_9;
            }
            LOWORD(v10) = 0;
            v11 = 0;
          }
        }
        else
        {
          v4 = v6;
          v5 = 1;
          v18[0] = get_byte(v6);
          v3 += v18[0];
          v9 = first_seg[1];
          if ( v9 - 1 != v6 )
            goto LABEL_9;
          LOWORD(v10) = 0;
          v11 = 1;
          v8 = 1;
        }
LABEL_8:
        v16 = v8;
        v12 = v10 + v3 + v11;
        v17 = v4;
        v3 = 0;
        v14 = BYTE3(v4) + BYTE2(v4) + BYTE1(v4) + (unsigned __int8)v4 + v12;
        v15 = 0;
        qfwrite(a1, &v15, 2);
        qfwrite(a1, &v17, 4);
        qfwrite(a1, &v16, 2);
        qfwrite(a1, v18, v16);
        qfwrite(a1, &v14, 2);
        memset(v18, 0, 0x10000u);
        v9 = first_seg[1];
        v5 = 0;
LABEL_9:
        if ( ++v6 >= v9 )
          goto LABEL_13;
      }
      if ( v5 )
      {
        v11 = (unsigned __int8)v5;
        v8 = v5;
        v10 = v5 >> 8;
        goto LABEL_8;
      }
      if ( ++v6 >= (unsigned __int64)first_seg[1] )
        goto LABEL_13;
    }
  }
LABEL_14:
  qfwrite(a1, &unk_20C0, 10);
  return v19 - __readfsqword(0x28u);
}

