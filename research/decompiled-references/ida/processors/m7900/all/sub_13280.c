__int64 __fastcall sub_13280(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // cl
  int v3; // r14d
  int v4; // ebp
  unsigned __int16 word; // r12
  unsigned __int8 byte; // al
  int v7; // r13d
  int v8; // r12d
  int v9; // r14d
  unsigned __int16 v10; // bp
  unsigned __int16 v11; // ax
  int v12; // r13d
  int v13; // ebp
  unsigned int v14; // r15d
  unsigned int v15; // esi
  int v16; // r13d
  int v17; // ebp
  unsigned int v18; // r15d
  unsigned int v19; // esi
  int v20; // r13d
  int v21; // r12d
  int v22; // r14d
  unsigned __int8 v23; // bp
  unsigned __int8 v24; // al
  int v25; // r14d
  int v26; // ebp
  int v27; // r15d
  unsigned __int8 v28; // r12
  unsigned __int16 v29; // ax
  int v30; // r14d
  int v31; // ebp
  int v32; // r15d
  unsigned __int8 v33; // r12
  unsigned __int16 v34; // ax
  int v35; // r14d
  int v36; // ebp
  int v37; // r15d
  unsigned __int16 v38; // r12
  unsigned __int8 v39; // al
  int v40; // [rsp+Ch] [rbp-3Ch]
  int v41; // [rsp+Ch] [rbp-3Ch]

  result = get_byte();
  v2 = result & 0xF;
  if ( (unsigned __int8)result <= 0xBFu )
  {
    switch ( (unsigned __int8)result >> 4 )
    {
      case 0:
        v3 = v2;
        if ( v2 )
        {
          v4 = 0;
          do
          {
            word = get_word();
            byte = get_byte();
            sub_12BC0((__int64)a1, byte);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            sub_12CC0((__int64)a1, word);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL),
                       33);
            if ( v3 - 1 != v4 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v4;
          }
          while ( v3 > v4 );
        }
        break;
      case 1:
        v12 = v2;
        v13 = 0;
        result = (unsigned int)v2 - 1;
        v40 = v2 - 1;
        if ( v2 )
        {
          do
          {
            if ( get_sreg() )
              v14 = (unsigned __int8)get_byte();
            else
              v14 = (unsigned __int16)get_word();
            v15 = (unsigned __int8)get_byte();
            sub_12BC0((__int64)a1, v15);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
            result = sub_126C0((__int64)a1, (__int64)byte_19071, v14);
            if ( v40 != v13 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v13;
          }
          while ( v13 != v12 );
        }
        break;
      case 2:
      case 4:
      case 8:
      case 10:
        return result;
      case 3:
        v16 = v2;
        v17 = 0;
        result = (unsigned int)v2 - 1;
        v41 = v2 - 1;
        if ( v2 )
        {
          do
          {
            if ( get_sreg() )
              v18 = (unsigned __int8)get_byte();
            else
              v18 = (unsigned __int16)get_word();
            v19 = (unsigned __int16)get_word();
            sub_12CC0((__int64)a1, v19);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
            result = sub_126C0((__int64)a1, (__int64)byte_19071, v18);
            if ( v41 != v17 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v17;
          }
          while ( v17 != v16 );
        }
        break;
      case 5:
        v20 = v2;
        v21 = 0;
        v22 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v23 = get_byte();
            v24 = get_byte();
            sub_12BC0((__int64)a1, v24);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12BC0((__int64)a1, v23);
            if ( v22 != v21 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v21;
          }
          while ( v20 > v21 );
        }
        break;
      case 6:
        v25 = v2;
        v26 = 0;
        v27 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v28 = get_byte();
            v29 = get_word();
            sub_12CC0((__int64)a1, v29);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            sub_12BC0((__int64)a1, v28);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL),
                       33);
            if ( v27 != v26 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v26;
          }
          while ( v25 > v26 );
        }
        break;
      case 7:
        v30 = v2;
        v31 = 0;
        v32 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v33 = get_byte();
            v34 = get_word();
            sub_12CC0((__int64)a1, v34);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12BC0((__int64)a1, v33);
            if ( v32 != v31 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v31;
          }
          while ( v30 > v31 );
        }
        break;
      case 9:
        v35 = v2;
        v36 = 0;
        v37 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v38 = get_word();
            v39 = get_byte();
            sub_12BC0((__int64)a1, v39);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12CC0((__int64)a1, v38);
            if ( v37 != v36 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v36;
          }
          while ( v35 > v36 );
        }
        break;
      case 11:
        v7 = v2;
        v8 = 0;
        v9 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v10 = get_word();
            v11 = get_word();
            sub_12CC0((__int64)a1, v11);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12CC0((__int64)a1, v10);
            if ( v9 != v8 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v8;
          }
          while ( v7 > v8 );
        }
        break;
    }
  }
  return result;
}

