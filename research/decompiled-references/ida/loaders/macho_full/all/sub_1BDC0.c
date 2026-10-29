__int64 __fastcall sub_1BDC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r15
  __int64 v5; // rbx
  int v6; // esi
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  int v16; // eax
  unsigned __int64 v17; // r13
  size_t v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // r14
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int16 v31; // [rsp+14h] [rbp-44h]
  __int16 v32; // [rsp+16h] [rbp-42h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 648);
  if ( v2 != v2 + 168LL * *(_QWORD *)(a1 + 656) )
  {
    v3 = *(_QWORD *)(a1 + 648);
    v5 = a1;
    v30 = v2 + 168LL * *(_QWORD *)(a1 + 656);
LABEL_3:
    while ( 2 )
    {
      v6 = *(_DWORD *)(v3 + 32);
      switch ( v6 )
      {
        case 1:
          v16 = *(_DWORD *)(v3 + 64);
          v17 = 0;
          v18 = (unsigned int)(32 * v16);
          if ( !*(_QWORD *)(v3 + 48) )
            goto LABEL_28;
          v28 = v5;
          v19 = *(_QWORD *)(v3 + 48);
          v20 = 0;
          while ( 1 )
          {
            v22 = v16 * (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v3 + 40) + 2 * v17);
            if ( v22 >= *(_QWORD *)(v3 + 80) )
            {
              v5 = v28;
              sub_112F0((__int64)"Corrupted DYLD slide info");
              goto LABEL_28;
            }
            ++v17;
            v21 = v20 + *(_QWORD *)v3;
            v20 += v18;
            result = sub_1B710(v28, a2, v21, v18, *(_QWORD *)(v3 + 72) + v22, v3);
            if ( (_DWORD)result )
              return result;
            if ( v17 >= v19 )
            {
              v5 = v28;
              v3 += 168;
              if ( v30 != v3 )
                goto LABEL_3;
              return 0;
            }
            v16 = *(_DWORD *)(v3 + 64);
          }
        case 2:
        case 4:
          v31 = -1;
          v32 = 0x7FFF;
          if ( v6 == 2 )
          {
            v31 = 0x4000;
            v32 = 0x3FFF;
          }
          v12 = 0;
          break;
        case 3:
        case 5:
          v7 = 0;
          while ( v7 < *(_QWORD *)(v3 + 104) )
          {
            v8 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 96) + 2 * v7);
            v9 = *(_QWORD *)v3 + v7 * *(unsigned int *)(v3 + 144);
            if ( (_WORD)v8 == 0xFFFF )
            {
              if ( (debug & 0x10) != 0 )
                sub_191F0((__int64)"page %llx has no pointers for sliding\n", v9);
              ++v7;
              continue;
            }
            v10 = v8 + v9;
            if ( (debug & 0x10) != 0 )
              sub_191F0((__int64)"page %llx: slide chain at %llx\n", v9, v8 + v9);
            result = sub_1BA50(v5, a2, v10, v3);
            ++v7;
            if ( (_DWORD)result )
              return result;
          }
LABEL_28:
          v3 += 168;
          if ( v30 != v3 )
            continue;
          return 0;
        default:
          sub_19510((__int64)"Unhandled dyld slide info version %d");
          return 0xFFFFFFFFLL;
      }
      break;
    }
    while ( 1 )
    {
      if ( v12 >= *(_QWORD *)(v3 + 104) )
        goto LABEL_28;
      v13 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 96) + 2 * v12);
      v14 = *(_QWORD *)v3 + v12 * *(unsigned int *)(v3 + 144);
      if ( v31 == (_WORD)v13 )
        break;
      if ( (v13 & 0x8000u) != 0 )
      {
        v23 = (unsigned __int16)(v32 & v13);
        if ( v23 < *(_QWORD *)(v3 + 128) )
        {
          v33 = v12;
          v24 = *(_QWORD *)(v3 + 128);
          v29 = v5;
          v25 = v23;
          do
          {
            v26 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 120) + 2 * v25);
            if ( (v26 & 0x8000u) != 0 )
            {
              v12 = v33;
              v5 = v29;
              goto LABEL_32;
            }
            v27 = v14 + ((4 * v26) & 0x3FFFC);
            if ( (debug & 0x10) != 0 )
              sub_191F0((__int64)"page %llx: extra slide chain at %llx\n", v14, v27);
            ++v25;
            result = sub_1BA50(v29, a2, v27, v3);
          }
          while ( !(_DWORD)result && v25 < v24 );
          v12 = v33;
          v5 = v29;
          goto LABEL_15;
        }
LABEL_32:
        ++v12;
      }
      else
      {
        v15 = v14 + ((4 * v13) & 0x3FFFC);
        if ( (debug & 0x10) != 0 )
          sub_191F0((__int64)"page %llx: single slide chain at %llx\n", v14, v15);
        result = sub_1BA50(v5, a2, v15, v3);
LABEL_15:
        ++v12;
        if ( (_DWORD)result )
          return result;
      }
    }
    if ( (debug & 0x10) != 0 )
      sub_191F0((__int64)"page %llx has no pointers for sliding\n", v14);
    goto LABEL_32;
  }
  return 0;
}

