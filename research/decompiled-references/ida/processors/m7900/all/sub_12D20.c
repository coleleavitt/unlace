__int64 __fastcall sub_12D20(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // cl
  int v3; // r14d
  int v4; // r12d
  unsigned __int8 byte; // bp
  unsigned __int8 v6; // al
  int v7; // r13d
  int v8; // r12d
  int v9; // r14d
  unsigned __int16 v10; // bp
  unsigned __int16 v11; // ax
  int v12; // r14d
  int v13; // ebp
  int v14; // r15d
  unsigned __int16 word; // r12
  unsigned __int8 v16; // al
  int v17; // r14d
  int v18; // ebp
  unsigned __int8 v19; // r12
  unsigned __int16 v20; // ax
  int v21; // r13d
  int v22; // r12d
  int v23; // r14d
  unsigned __int8 v24; // bp
  unsigned __int8 v25; // al
  int v26; // r14d
  int v27; // ebp
  int v28; // r15d
  unsigned __int8 v29; // r12
  unsigned __int16 v30; // ax
  int v31; // r14d
  int v32; // ebp
  int v33; // r15d
  unsigned __int8 v34; // r12
  unsigned __int16 v35; // ax
  int v36; // r14d
  int v37; // ebp
  int v38; // r15d
  unsigned __int16 v39; // r12
  unsigned __int8 v40; // al
  int v41; // [rsp+Ch] [rbp-3Ch]

  result = get_byte();
  v2 = result & 0xF;
  if ( (unsigned __int8)result <= 0xAFu )
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
            byte = get_byte();
            v6 = get_byte();
            sub_12BC0((__int64)a1, v6);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
            result = sub_126C0((__int64)a1, (__int64)byte_19071, byte);
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
        v14 = v2 - 1;
        if ( v2 )
        {
          do
          {
            word = get_word();
            v16 = get_byte();
            sub_12BC0((__int64)a1, v16);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            sub_12CC0((__int64)a1, word);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL),
                       33);
            if ( v14 != v13 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v13;
          }
          while ( v12 > v13 );
        }
        break;
      case 2:
        v17 = v2;
        v18 = 0;
        result = (unsigned int)v2 - 1;
        v41 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v19 = get_byte();
            v20 = get_word();
            sub_12CC0((__int64)a1, v20);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
            result = sub_126C0((__int64)a1, (__int64)byte_19071, v19);
            if ( v41 != v18 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v18;
          }
          while ( v17 > v18 );
        }
        break;
      case 3:
      case 5:
      case 9:
        return result;
      case 4:
        v21 = v2;
        v22 = 0;
        v23 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v24 = get_byte();
            v25 = get_byte();
            sub_12BC0((__int64)a1, v25);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12BC0((__int64)a1, v24);
            if ( v23 != v22 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v22;
          }
          while ( v21 > v22 );
        }
        break;
      case 6:
        v26 = v2;
        v27 = 0;
        v28 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v29 = get_byte();
            v30 = get_word();
            sub_12CC0((__int64)a1, v30);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12BC0((__int64)a1, v29);
            if ( v28 != v27 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v27;
          }
          while ( v26 > v27 );
        }
        break;
      case 7:
        v31 = v2;
        v32 = 0;
        v33 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v34 = get_byte();
            v35 = get_word();
            sub_12CC0((__int64)a1, v35);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            sub_12BC0((__int64)a1, v34);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL),
                       33);
            if ( v33 != v32 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v32;
          }
          while ( v31 > v32 );
        }
        break;
      case 8:
        v36 = v2;
        v37 = 0;
        v38 = v2 - 1;
        if ( v2 )
        {
          do
          {
            v39 = get_word();
            v40 = get_byte();
            sub_12BC0((__int64)a1, v40);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            result = sub_12CC0((__int64)a1, v39);
            if ( v38 != v37 )
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            ++v37;
          }
          while ( v36 > v37 );
        }
        break;
      case 10:
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

