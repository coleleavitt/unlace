__int64 __fastcall sub_9D40(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 v4; // al
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rax
  unsigned __int8 next_byte; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 next_qword; // rax
  unsigned __int8 v23; // al
  unsigned int v24; // r14d
  __int64 v25; // rcx
  unsigned int next_dword; // eax
  __int64 v27; // r13
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rax
  unsigned __int8 v33; // [rsp+Fh] [rbp-69h] BYREF
  unsigned int v34; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+14h] [rbp-64h] BYREF
  __int64 v36; // [rsp+18h] [rbp-60h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_13410() )
    return 0;
  if ( !sub_10500(a2, &v34) )
    return 0;
  v3 = v34;
  *(_WORD *)(a2 + 24) = v34;
  if ( (_WORD)v3 == 541 )
    return 0;
  if ( (unsigned int)v3 > 0x1E3 )
  {
    if ( (unsigned int)(v3 - 484) <= 0x37 )
    {
LABEL_11:
      sub_103E0(a2, &v36, &v35, &v37, 0);
      v5 = v36;
      *(_BYTE *)(a2 + 44) &= ~8u;
      *(_BYTE *)(a2 + 41) = 13;
      *(_QWORD *)(a2 + 48) = v5;
      v6 = v37;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 88) = v6;
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 2;
      if ( !v6 )
        *(_BYTE *)(a2 + 84) &= ~8u;
    }
  }
  else if ( (unsigned int)v3 > 1 )
  {
    switch ( v3 )
    {
      case 2LL:
      case 3LL:
      case 4LL:
      case 6LL:
        if ( sub_10340(a2, &v37)
          && ((v12 = (int)v37, (_DWORD)v37 == -64 || (unsigned int)((_DWORD)v37 + 4) <= 3) || (int)v37 < 0) )
        {
          *(_BYTE *)(a2 + 41) = 12;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v12;
        }
        else
        {
          sub_9C70((__int64)"0x%llx: couldn't read block insn type\n", *(_QWORD *)(a2 + 16));
        }
        break;
      case 7LL:
      case 8LL:
      case 9LL:
      case 20LL:
      case 203LL:
      case 207LL:
      case 209LL:
      case 210LL:
      case 211LL:
      case 212LL:
      case 213LL:
      case 216LL:
        sub_10180(a2, &v37);
        v8 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v8;
        break;
      case 11LL:
      case 12LL:
      case 188LL:
        sub_10180(a2, &v37);
        v14 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 14;
        *(_QWORD *)(a2 + 48) = v14;
        break;
      case 13LL:
        v37 = nullptr;
        v38 = 0;
        if ( !sub_10180(a2, &v35) )
          sub_9BC0((__int64)"ana: couldn't read vector size");
        v27 = v35;
        v28 = v38;
        v29 = v35;
        if ( (unsigned __int64)v38 < v35 )
        {
          if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)v35 )
          {
            v37 = (__int64 (__fastcall **)())qvector_reserve(&v37, v37, v35, 4);
            v28 = v38;
          }
          memset((char *)v37 + 4 * v28, 0, 4 * (v27 - v28));
          *(_QWORD *)&v38 = v27;
          v29 = v35;
        }
        else if ( v35 != (_QWORD)v38 )
        {
          *(_QWORD *)&v38 = v35;
        }
        v30 = 0;
        if ( v29 )
        {
          do
          {
            if ( !sub_10180(a2, &v36) )
              sub_9BC0((__int64)"ana: couldn't read vector elem %u", v30);
            *((_DWORD *)v37 + v30++) = v36;
          }
          while ( (unsigned int)v30 < v35 );
        }
        v31 = v38;
        if ( !(_QWORD)v38 )
        {
          sub_9C70((__int64)"0x%llx: br_table has no depth targets\n", *(_QWORD *)(a2 + 16));
          v31 = v38;
        }
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v31;
        sub_10180(a2, &v36);
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        break;
      case 15LL:
      case 17LL:
      case 189LL:
        sub_10180(a2, &v37);
        v16 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v16;
        *(_QWORD *)(a2 + 64) = 10;
        break;
      case 16LL:
      case 18LL:
        sub_10180(a2, &v37);
        v20 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v20;
        *(_QWORD *)(a2 + 64) = 11;
        insn_get_next_byte(a2);
        break;
      case 24LL:
        v24 = 1;
        sub_10180(a2, &v35);
        v25 = v35;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v25;
        if ( (unsigned int)(v25 + 1) > 1 )
        {
          do
          {
            sub_10340(a2, &v37);
            if ( (unsigned int)((_DWORD)v37 + 4) > 3 )
              sub_9C70((__int64)"0x%llx: result type is not allowed\n", *(_QWORD *)(a2 + 16));
            ++v24;
            sub_10180(a2, &v36);
          }
          while ( v24 < v35 + 1 );
        }
        break;
      case 25LL:
      case 26LL:
      case 27LL:
        sub_10180(a2, &v37);
        v13 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 8;
        *(_QWORD *)(a2 + 48) = 8 * v13;
        break;
      case 28LL:
      case 29LL:
        sub_10180(a2, &v37);
        v17 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v17;
        *(_QWORD *)(a2 + 64) = 9;
        break;
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
      case 40LL:
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
      case 45LL:
      case 46LL:
      case 47LL:
      case 48LL:
      case 49LL:
      case 50LL:
      case 51LL:
      case 52LL:
      case 217LL:
      case 218LL:
      case 219LL:
      case 220LL:
      case 221LL:
      case 222LL:
      case 223LL:
      case 224LL:
      case 225LL:
      case 226LL:
      case 227LL:
      case 228LL:
      case 309LL:
      case 310LL:
      case 473LL:
      case 474LL:
      case 475LL:
      case 477LL:
      case 478LL:
      case 479LL:
      case 480LL:
      case 481LL:
      case 482LL:
      case 483LL:
        goto LABEL_11;
      case 53LL:
      case 54LL:
      case 204LL:
      case 205LL:
        insn_get_next_byte(a2);
        break;
      case 55LL:
        sub_101F0(a2, a2 + 48);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        break;
      case 56LL:
        sub_10290(a2, a2 + 48);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 7;
        break;
      case 57LL:
        next_dword = insn_get_next_dword(a2);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 3;
        *(_QWORD *)(a2 + 48) = next_dword;
        break;
      case 58LL:
        next_qword = insn_get_next_qword(a2);
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = next_qword;
        *(_BYTE *)(a2 + 45) = 4;
        break;
      case 187LL:
      case 192LL:
      case 193LL:
        *(_BYTE *)(a2 + 41) = 5;
        v15 = insn_get_next_dword(a2);
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v15;
        break;
      case 202LL:
        sub_10180(a2, &v37);
        v32 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v32;
        insn_get_next_byte(a2);
        break;
      case 206LL:
      case 208LL:
        sub_10180(a2, &v37);
        v18 = (unsigned int)v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = v18;
        sub_10180(a2, &v37);
        v19 = (unsigned int)v37;
        *(_BYTE *)(a2 + 85) = 2;
        *(_BYTE *)(a2 + 81) = 5;
        *(_QWORD *)(a2 + 88) = v19;
        break;
      case 214LL:
        sub_10340(a2, &v37);
        v21 = (int)v37;
        *(_BYTE *)(a2 + 41) = 12;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v21;
        break;
      case 229LL:
      case 230LL:
        *(_BYTE *)(a2 + 41) = 5;
        *(_QWORD *)(a2 + 48) = insn_get_next_qword(a2);
        insn_get_next_qword(a2);
        *(_BYTE *)(a2 + 45) = 8;
        break;
      case 238LL:
      case 239LL:
      case 240LL:
      case 241LL:
      case 242LL:
      case 243LL:
      case 244LL:
      case 245LL:
      case 246LL:
      case 247LL:
      case 248LL:
      case 249LL:
      case 250LL:
      case 251LL:
        *(_BYTE *)(a2 + 41) = 5;
        next_byte = insn_get_next_byte(a2);
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = next_byte;
        break;
      case 301LL:
      case 302LL:
      case 303LL:
      case 304LL:
      case 305LL:
      case 306LL:
      case 307LL:
      case 308LL:
        sub_103E0(a2, &v36, &v35, &v37, &v33);
        v9 = v36;
        *(_BYTE *)(a2 + 44) &= ~8u;
        *(_BYTE *)(a2 + 41) = 13;
        *(_QWORD *)(a2 + 48) = v9;
        v10 = v37;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 88) = v10;
        *(_BYTE *)(a2 + 81) = 4;
        *(_BYTE *)(a2 + 85) = 2;
        if ( !v10 )
          *(_BYTE *)(a2 + 84) &= ~8u;
        v11 = v33;
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 0;
        *(_QWORD *)(a2 + 128) = v11;
        break;
      case 476LL:
        v23 = insn_get_next_byte(a2);
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 0;
        *(_QWORD *)(a2 + 48) = v23;
        break;
      default:
        break;
    }
  }
  *(_QWORD *)&v38 = 0;
  v37 = off_215F8;
  *((_QWORD *)&v38 + 1) = a1;
  v4 = getinf_flag(11, 4);
  construct_macro(&v37, a2, v4);
  return *(unsigned __int16 *)(a2 + 26);
}
