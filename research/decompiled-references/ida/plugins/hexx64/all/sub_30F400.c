__int64 __fastcall sub_30F400(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rbx
  char *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  __int64 v24[7]; // [rsp+10h] [rbp-38h] BYREF

  v24[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v3 == 4 )
  {
    v5 = *(unsigned int *)(a1 + 56);
    v6 = sub_11FD80((char *)(v3 + 32), v24, 0);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v6 && v5 == v24[0] )
    {
      sub_125180((unsigned __int8 *)(a1 + 40), (unsigned __int8 *)(v3 + 64));
      return 0;
    }
    if ( *(_DWORD *)v3 != 20 )
      return 0;
  }
  else if ( *(_DWORD *)v3 != 20 )
  {
    return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( *(_BYTE *)(v3 + 32) == 1 && *(_DWORD *)(v7 + 60) == *(_DWORD *)(v3 + 40) )
  {
    v9 = (__int64 *)(a1 + 40);
    if ( sub_125B60((unsigned __int8 *)(v3 + 48), a1 + 40, 0, a2) )
      goto LABEL_14;
    v3 = *(_QWORD *)(a1 + 32);
  }
  v8 = (char *)sub_11C8A0(v3, &v23);
  if ( v8 )
  {
    if ( *(_BYTE *)v23 == 1 && *(_DWORD *)(v7 + 60) == *(_DWORD *)(v23 + 8) )
    {
      v9 = v24;
      v10 = *(unsigned int *)(a1 + 56);
      if ( (unsigned __int8)sub_11FD80(v8, v24, 0) )
      {
        if ( v10 == v24[0] )
        {
LABEL_14:
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
          **(_DWORD **)(a1 + 32) = 4;
          sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
          v14 = j__qalloc_or_throw(80, (__int64)v9, v12, v13);
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
          *(_QWORD *)(v14 + 40) = 0;
          *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 56) = 0;
          *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v14 + 72) = 0;
          sub_330970(v14, v15);
          v16 = *(_QWORD *)(a1 + 32);
          sub_11CDA0(v16 + 32);
          *(_BYTE *)(v16 + 32) = 4;
          *(_QWORD *)(v16 + 40) = v14;
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
          *(_DWORD *)v14 = 56;
          sub_11D4A0(v14 + 32);
          v19 = j__qalloc_or_throw(312, (__int64)"get_current", v17, v18);
          *(_QWORD *)v19 = -1;
          v20 = v19;
          *(_QWORD *)(v19 + 8) = 0;
          *(_QWORD *)(v19 + 16) = 0;
          *(_QWORD *)(v19 + 24) = 0;
          *(_QWORD *)(v19 + 48) = 0;
          *(_QWORD *)(v19 + 72) = 0;
          *(_QWORD *)(v19 + 80) = 0;
          *(_QWORD *)(v19 + 88) = 0;
          *(_QWORD *)(v19 + 96) = 0;
          *(_QWORD *)(v19 + 104) = 0;
          *(_QWORD *)(v19 + 112) = 0;
          *(_QWORD *)(v19 + 136) = 0;
          *(_QWORD *)(v19 + 144) = 0;
          *(_QWORD *)(v19 + 152) = 0;
          *(_QWORD *)(v19 + 176) = 0;
          *(_QWORD *)(v19 + 184) = 0;
          *(_QWORD *)(v19 + 192) = 0;
          *(_QWORD *)(v19 + 216) = 0;
          *(_QWORD *)(v19 + 240) = 0;
          *(_QWORD *)(v19 + 248) = 0;
          *(_QWORD *)(v19 + 256) = 0;
          *(_QWORD *)(v19 + 280) = 0;
          *(_QWORD *)(v19 + 288) = 0;
          *(_OWORD *)(v19 + 32) = 0;
          *(_OWORD *)(v19 + 56) = 0;
          *(_OWORD *)(v19 + 120) = 0;
          *(_OWORD *)(v19 + 160) = 0;
          *(_OWORD *)(v19 + 200) = 0;
          *(_OWORD *)(v19 + 224) = 0;
          *(_OWORD *)(v19 + 264) = 0;
          *(_OWORD *)(v19 + 296) = 0;
          *(_BYTE *)(v14 + 64) = 8;
          *(_QWORD *)(v14 + 72) = v19;
          *(_DWORD *)(v14 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
          *(_DWORD *)(v19 + 280) |= 0x15u;
          if ( *(_BYTE *)(v11 + 1304) || (v24[0] = (__int64)&unk_42D930, (unsigned __int8)deserialize_tinfo()) )
          {
            if ( (unsigned __int8)sub_335200(v20) )
            {
              sub_330290(v20, *(_QWORD *)(a1 + 8));
              v21 = *(_QWORD *)(a1 + 16);
              v22 = *(_DWORD *)(v21 + 24);
              BYTE1(v22) &= ~2u;
              LOBYTE(v22) = v22 | 0x80;
              *(_DWORD *)(v21 + 24) = v22;
              return 0;
            }
            if ( !under_debugger )
              sub_383060(0xC552u, 0.0);
          }
          else if ( !under_debugger )
          {
            sub_383060(0xC82Bu, 0.0);
          }
          BUG();
        }
      }
    }
  }
  return 0;
}

