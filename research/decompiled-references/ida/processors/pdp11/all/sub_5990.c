__int64 __fastcall sub_5990(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v9; // rax
  unsigned __int16 v10; // r15
  unsigned __int64 item_end; // rax
  __int64 v12; // r13
  unsigned __int8 byte; // bp
  unsigned __int8 v14; // al
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 (__fastcall *v27)(_QWORD *, char); // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(_QWORD *, char); // rax
  __int64 v33; // r13
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-518h]
  unsigned __int64 v40; // [rsp+8h] [rbp-510h]
  unsigned __int64 v41; // [rsp+8h] [rbp-510h]
  unsigned __int64 v42; // [rsp+8h] [rbp-510h]
  unsigned __int64 v43; // [rsp+10h] [rbp-508h]
  unsigned __int16 v44; // [rsp+1Ah] [rbp-4FEh]
  __int64 v45; // [rsp+20h] [rbp-4F8h]
  __int64 v46; // [rsp+20h] [rbp-4F8h]
  __int64 v47; // [rsp+28h] [rbp-4F0h]
  char v48[144]; // [rsp+40h] [rbp-4D8h] BYREF
  _BYTE v49[1032]; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+4D8h] [rbp-40h]

  v4 = a2[2];
  v50 = __readfsqword(0x28u);
  v6 = getseg();
  if ( v6 && *(_BYTE *)(v6 + 184) != 12 && !(unsigned __int8)is_loaded() )
    return sub_4BB0(a1, (__int64)a2);
  v7 = a2[90];
  if ( (v7 & 0x600) != 0 )
  {
    if ( (a2[90] & 0x600LL) != 0x400 )
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
    v9 = (unsigned int)v7 & 0xF0000000;
    switch ( v9 )
    {
      case 268435456LL:
        if ( (unsigned int)get_radix() != 16 )
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
        v10 = 2;
        break;
      case 536870912LL:
        v10 = 4;
        break;
      case 805306368LL:
        v10 = 8;
        break;
      default:
        v10 = 10;
        if ( v9 != 0x40000000 )
          return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
        break;
    }
    get_radix();
    item_end = get_item_end();
    if ( v4 < item_end )
    {
      v43 = item_end;
      v39 = v10;
      v44 = v10 >> 1;
      while ( 1 )
      {
        if ( get_bytes() != v39 || (unsigned int)r50_to_asc() )
        {
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 56LL))(a2, ".word   ", 32);
          v40 = v4;
          v12 = 0;
          do
          {
            if ( v12 )
              (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 44);
            ++v12;
            btoa64();
            (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a2 + 56LL))(a2, v49, 12);
          }
          while ( (unsigned __int16)v12 < v44 );
          v4 = v40;
          goto LABEL_22;
        }
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a2 + 56LL))(a2, ".rad50  ", 32);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 10);
        v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
        if ( v15 == sub_4A80 )
          break;
        v15(a2, 47);
LABEL_35:
        (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a2 + 56LL))(a2, v49, 0);
        v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
        if ( v20 != sub_4A80 )
        {
          v20(a2, 47);
          goto LABEL_39;
        }
        v21 = a2[4];
        if ( v21 )
        {
          v22 = v21 + 1;
          v23 = a2[4];
          v24 = a2[3];
          --v21;
          if ( a2[5] < v22 )
            goto LABEL_43;
        }
        else
        {
          v24 = a2[3];
          v23 = 1;
          v22 = 2;
          if ( a2[5] < 2u )
          {
LABEL_43:
            v46 = v21;
            v42 = v22;
            v26 = qvector_reserve();
            v21 = v46;
            v22 = v42;
            a2[3] = v26;
            v24 = v26;
          }
        }
        a2[4] = v22;
        *(_BYTE *)(v24 + v21) = 47;
        *(_BYTE *)(a2[3] + v23) = 0;
LABEL_39:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 10);
LABEL_22:
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFFFFFFLL) )
        {
          v4 += v39;
          if ( v4 < v43 )
            continue;
        }
        return v50 - __readfsqword(0x28u);
      }
      v16 = a2[4];
      if ( v16 )
      {
        v17 = v16 + 1;
        v18 = a2[4];
        v19 = a2[3];
        --v16;
        if ( a2[5] >= v17 )
        {
LABEL_34:
          a2[4] = v17;
          *(_BYTE *)(v19 + v16) = 47;
          *(_BYTE *)(a2[3] + v18) = 0;
          goto LABEL_35;
        }
      }
      else
      {
        v19 = a2[3];
        v18 = 1;
        v17 = 2;
        if ( a2[5] >= 2u )
          goto LABEL_34;
      }
      v47 = v18;
      v45 = v16;
      v41 = v17;
      v25 = qvector_reserve();
      v18 = v47;
      v16 = v45;
      a2[3] = v25;
      v17 = v41;
      v19 = v25;
      goto LABEL_34;
    }
  }
  else
  {
    if ( !(unsigned __int8)is_loaded() )
      return (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*a2 + 136LL))(a2, &dword_7394, 0xFFFFFFFFLL);
    byte = get_byte();
    btoa64();
    v14 = 32;
    if ( byte >= 0x20u )
      v14 = byte;
    sub_4C60((__int64)a2, (__int64)&word_739E, v48, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v14);
    if ( (v4 & 1) == 0 && (unsigned __int16)get_word() )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 4);
      v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v27 == sub_4A80 )
      {
        v28 = a2[4];
        if ( v28 )
        {
          v29 = v28 + 1;
          v30 = a2[4];
          --v28;
        }
        else
        {
          v30 = 1;
          v29 = 2;
        }
        v31 = a2[3];
        if ( a2[5] < v29 )
        {
          v38 = qvector_reserve();
          a2[3] = v38;
          v31 = v38;
        }
        a2[4] = v29;
        *(_BYTE *)(v31 + v28) = 32;
        *(_BYTE *)(a2[3] + v30) = 0;
      }
      else
      {
        v27(a2, 32);
      }
      b2a32();
      (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a2 + 56LL))(a2, v49, 0);
      v32 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v32 == sub_4A80 )
      {
        v33 = a2[4];
        if ( v33 )
        {
          v34 = v33 + 1;
          v35 = a2[4];
          --v33;
        }
        else
        {
          v35 = 1;
          v34 = 2;
        }
        v36 = a2[3];
        if ( a2[5] < v34 )
        {
          v37 = qvector_reserve();
          a2[3] = v37;
          v36 = v37;
        }
        a2[4] = v34;
        *(_BYTE *)(v36 + v33) = 32;
        *(_BYTE *)(a2[3] + v35) = 0;
      }
      else
      {
        v32(a2, 32);
      }
      r50_to_asc();
      (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a2 + 56LL))(a2, v49, 0);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 4);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFFFFFFLL);
  }
  return v50 - __readfsqword(0x28u);
}

