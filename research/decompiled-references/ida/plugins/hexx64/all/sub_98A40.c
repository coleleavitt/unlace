__int64 __fastcall sub_98A40(const __m128i *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // r15d
  int *v6; // r9
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int8 *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int32 v15; // eax
  __int64 v16; // [rsp+0h] [rbp-118h]
  char *v17; // [rsp+0h] [rbp-118h]
  __int64 v18; // [rsp+8h] [rbp-110h]
  __int64 *v19; // [rsp+8h] [rbp-110h]
  char *v20; // [rsp+10h] [rbp-108h]
  int v21; // [rsp+18h] [rbp-100h]
  char *v22; // [rsp+18h] [rbp-100h]
  char *v23; // [rsp+20h] [rbp-F8h]
  __int64 v24; // [rsp+28h] [rbp-F0h]
  int v25; // [rsp+30h] [rbp-E8h] BYREF
  int v26; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v27; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int8 v28[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v29[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-B0h]
  _QWORD v31[4]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-60h]
  __int64 v35; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 10
    && *(_BYTE *)(a2 + 32) == 4
    && (v3 = *(_QWORD *)(a2 + 40)) != 0
    && *(_DWORD *)(a2 + 36) == 2 * *(_DWORD *)(a2 + 68)
    && (unsigned int)(*(_DWORD *)v3 - 23) <= 1
    && (unsigned __int8)sub_152630(v3, &v25) )
  {
    v31[1] = a1;
    v32[0] = 0xFFFFFFFF00000000LL;
    v33 = 0xFFFFFFFF00000000LL;
    v31[0] = &off_4DBDF0;
    v31[2] = 0;
    v31[3] = 0;
    v32[1] = 0;
    v35 = 0x1FFFFFFFFLL;
    v34 = 0;
    v6 = (int *)sub_954F0((__int64)v31, a2, 1);
    if ( v6
      && !(_DWORD)v35
      && v6[17] == *(_DWORD *)(a2 + 36)
      && (v16 = (__int64)v6, (unsigned __int8)sub_1227B0(v6, &v26, &v27, 1))
      && *(_BYTE *)v27 == 4
      && (v7 = *(_DWORD **)(v27 + 8), *v7 == 9)
      && (v8 = *(_DWORD *)(a2 + 68), v25 + v26 == 8 * v8)
      && v8 == v7[9]
      && (unsigned __int8)sub_1301F0(a1, v16, (__int64)(v7 + 8), a2, v3 + 32) )
    {
      v11 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
      v18 = v16;
      v21 = v16 + 64;
      v12 = (unsigned __int8 *)(v16 + 64);
      v17 = (char *)v28;
      sub_123A40((__int64)v28, v12, v9, v10);
      if ( (unsigned __int8)sub_127850((unsigned __int64)v28, v11, *(_DWORD *)(a2 + 68), 0)
        && (v24 = v18, v4 = sub_12CF30(a1[4].m128i_i64[0], a2 + 64, v28, 0, 0, v18), (_BYTE)v4) )
      {
        memset(v29, 0, sizeof(v29));
        v30 = 0;
        sub_127FE0((__int64)a1, (__int64)v29, (__int64)v28, 1u, v13, v14, (int)v28, (int)v29, v3 + 32, v21, a2 + 64);
        if ( sub_A9D90((__int64)a1, v19, v24, *(_QWORD *)(a2 + 8), 1u) )
        {
          v4 = 0;
        }
        else
        {
          sub_11CA10((char *)(a2 + 48), (char *)(v3 + 48));
          sub_11CA10(v17, v20);
          sub_11CA10((char *)(a2 + 32), v17);
          sub_11CA10(v23, v22);
          *(_DWORD *)a2 = 23;
          sub_11D5A0(v24);
          v15 = a1[1].m128i_i32[2];
          BYTE1(v15) &= ~2u;
          LOBYTE(v15) = v15 | 0x80;
          a1[1].m128i_i32[2] = v15;
        }
        sub_93B40(v19);
      }
      else
      {
        v4 = 0;
      }
      sub_11CDA0((__int64)v17);
    }
    else
    {
      v4 = 0;
    }
    v31[0] = &off_4DBDF0;
    sub_11CDA0((__int64)&v33);
    sub_11CDA0((__int64)v32);
  }
  else
  {
    return 0;
  }
  return v4;
}

