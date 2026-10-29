__int64 __fastcall sub_AEC00(__int128 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r15d
  __int64 v6; // r14
  unsigned int v7; // eax
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // al
  __int64 v14; // r13
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+10h] [rbp-140h]
  __int64 v20; // [rsp+10h] [rbp-140h]
  __int64 v21; // [rsp+18h] [rbp-138h]
  __int64 v22; // [rsp+18h] [rbp-138h]
  unsigned __int8 *v23; // [rsp+20h] [rbp-130h]
  __int64 v24; // [rsp+20h] [rbp-130h]
  unsigned __int8 *v25; // [rsp+28h] [rbp-128h]
  int v26; // [rsp+30h] [rbp-120h]
  __int64 v27; // [rsp+38h] [rbp-118h]
  unsigned __int64 *v28; // [rsp+40h] [rbp-110h]
  char v29; // [rsp+4Fh] [rbp-101h]
  __int64 v30; // [rsp+58h] [rbp-F8h]
  unsigned __int8 *v31; // [rsp+68h] [rbp-E8h] BYREF
  unsigned __int8 v32[4]; // [rsp+70h] [rbp-E0h] BYREF
  int v33; // [rsp+74h] [rbp-DCh]
  _QWORD v34[2]; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v35[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v36[4]; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v37[2]; // [rsp+C0h] [rbp-90h] BYREF
  unsigned __int64 *v38[4]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v39[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+100h] [rbp-50h]
  __int64 v41; // [rsp+108h] [rbp-48h]
  unsigned __int64 v42; // [rsp+118h] [rbp-38h]

  v30 = *((_QWORD *)&a1 + 1);
  v42 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL);
  if ( *(_DWORD *)(a2 + 68) == v2 && v2 <= 7 && (**((_DWORD **)&a1 + 1) == 4 || **((_DWORD **)&a1 + 1) == *(_DWORD *)a2) )
  {
    v6 = sub_11C8A0(a2, &v31);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 4) & 0x40010) == 0 && (*(_BYTE *)(a2 + 65) & 2) == 0 )
      {
        LOBYTE(v7) = sub_A2650(*(_QWORD *)(a1 + 64), a2);
        v3 = v7;
        if ( !(_BYTE)v7 )
        {
          v8 = *(_DWORD *)(v6 + 4);
          v26 = 8 * v8;
          v9 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), v8, 0);
          v11 = v30;
          v21 = v9;
          v12 = *(_DWORD *)a2;
          if ( *(_DWORD *)v30 != 4 || *(_BYTE *)(v30 + 32) != 2 )
          {
            v29 = 0;
            v27 = 0;
            if ( v12 == 20 )
            {
              v27 = -1;
              v11 = v26;
              if ( (unsigned __int64)v26 <= 0x3F )
                v27 = (1LL << v26) - 1;
              v29 = 0;
            }
LABEL_13:
            v28 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
            sub_123A40((__int64)v32, v31, v10, v11);
            *((_QWORD *)&a1 + 1) = *(_QWORD *)(a2 + 8);
            v34[1] = 0;
            v34[0] = 0xFFFFFFFF00000000LL;
            v25 = (unsigned __int8 *)(a2 + 64);
            v23 = (unsigned __int8 *)(v30 + 64);
            if ( (unsigned __int8)sub_130BC0(
                                    (const __m128i *)a1,
                                    *((__int64 *)&a1 + 1),
                                    a2 + 64,
                                    *(_QWORD *)(v30 + 8),
                                    v30 + 64,
                                    1) )
            {
              if ( v29 )
              {
                v13 = sub_131730(v28, (const __m128i *)a1, a2, (__int64)v32, 2 * v33, 0, 0);
              }
              else
              {
                *((_QWORD *)&a1 + 1) = a2;
                v13 = sub_133520(a1, (__int64)v32, (_BYTE *)v30, (_BYTE *)v30);
              }
              if ( !v13 )
                goto LABEL_18;
              *((_QWORD *)&a1 + 1) = v32;
              if ( !(unsigned __int8)sub_AEAF0(a1, v30, (__int64)v28) )
                goto LABEL_18;
              sub_125180((__int64)v34, v25);
              *((_QWORD *)&a1 + 1) = *(_QWORD *)(a2 + 8);
              if ( !(unsigned __int8)sub_132E20(a1, (__int64)v34, *(_QWORD *)(v30 + 8), (__int64)v23, 0xDu) )
                goto LABEL_18;
              v29 = 0;
              v18 = v21 | (v27 << v26);
              if ( (unsigned __int64)v26 >= 0x40 )
                v18 = v21;
              v22 = v18;
            }
            else
            {
              if ( !(unsigned __int8)sub_130BC0(
                                       (const __m128i *)a1,
                                       *(_QWORD *)(v30 + 8),
                                       (__int64)v23,
                                       *(_QWORD *)(a2 + 8),
                                       (__int64)v25,
                                       1) )
                goto LABEL_18;
              if ( v29 )
              {
                v29 = sub_131730(v28, (const __m128i *)a1, a2, (__int64)v32, 2 * v33, 1u, 1u);
                if ( !v29 )
                  goto LABEL_18;
              }
              else if ( *(_DWORD *)v30 == 4 )
              {
                v20 = v30 + 32;
                if ( sub_11EFE0((unsigned __int8 *)(v30 + 32), v32, 2u)
                  || !(unsigned __int8)sub_130BC0((const __m128i *)a1, v30, v20, a2, (__int64)v32, 1) )
                {
                  goto LABEL_18;
                }
                sub_157210(a1, v30, v20, a2, (__int64)v32, 0);
              }
              else
              {
                *((_QWORD *)&a1 + 1) = a2;
                if ( !(unsigned __int8)sub_133220(a1, (__int64)v32, (_BYTE *)v30, v30) )
                  goto LABEL_18;
              }
              *((_QWORD *)&a1 + 1) = v32;
              if ( !(unsigned __int8)sub_AEAF0(a1, a2, (__int64)v28) )
                goto LABEL_18;
              sub_125180((__int64)v34, v23);
              *((_QWORD *)&a1 + 1) = *(_QWORD *)(v30 + 8);
              if ( !(unsigned __int8)sub_132E20(a1, (__int64)v34, *(_QWORD *)(a2 + 8), (__int64)v25, 0xDu) )
                goto LABEL_18;
              v17 = 0;
              if ( (unsigned __int64)v26 <= 0x3F )
                v17 = v21 << v26;
              v22 = v17 | v27;
            }
            if ( a2 )
            {
              if ( sub_122240(v30, *(_QWORD *)(a2 + 8), 0) )
              {
                v19 = a2;
                v24 = v30;
              }
              else
              {
                v24 = a2;
                v19 = v30;
              }
            }
            else
            {
              v24 = 0;
              v19 = v30;
            }
            sub_127A20((__int64)v35, a1, v19, 0, v15, v16);
            sub_124680((__int64)v37, a1, v24, 0);
            if ( !(unsigned __int8)sub_64780(v37, v35) && !(unsigned __int8)sub_318470(v38, (__int64)v36) )
            {
              sub_124680((__int64)v39, a1, v24, 1u);
              if ( !sub_129150(a1, v39, *(_QWORD *)(v24 + 16), v19, 0, 0, 0x101u) )
              {
                sub_A0E10((__int64)v34, (__int64)v28);
                sub_120A10(v6, (__int64)v28, v22, v33, **(_QWORD **)(v6 + 8), 0);
                sub_11CA10((char *)v31, (char *)v32);
                sub_A0E10((__int64)v31, (__int64)v28);
                sub_11CA10((char *)v25, (char *)v34);
                sub_A1280((int)v28, a2, *(_DWORD *)(v30 + 4));
                if ( v29 )
                  *(_DWORD *)(a2 + 4) |= 0x2000u;
                sub_11D5A0(v30);
                if ( v30 && sub_122240(a2, *(_QWORD *)(v30 + 8), 0) )
                  sub_11D890(v30, a2);
                v3 = 1;
                sub_93B40(v39);
                sub_93B40(v37);
                sub_93B40(v35);
                goto LABEL_18;
              }
              if ( v40 )
              {
                v41 = 0;
                qfree(v40);
              }
              qfree(v39[0]);
            }
            if ( v38[0] )
            {
              v38[1] = nullptr;
              qfree((__int64)v38[0]);
            }
            qfree(v37[0]);
            if ( v36[0] )
            {
              v36[1] = 0;
              qfree(v36[0]);
            }
            qfree(v35[0]);
LABEL_18:
            sub_11CDA0((__int64)v34);
            sub_11CDA0((__int64)v32);
            return v3;
          }
          if ( v12 != 21 )
          {
            v14 = 0;
            if ( v12 == 19 )
            {
              v14 = -1;
              if ( (unsigned __int64)v26 <= 0x3F )
                v14 = (1LL << v26) - 1;
            }
            v27 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v30 + 40) + 16LL), *(_DWORD *)(v30 + 36), 0);
            if ( v14 == v27 )
            {
              v29 = 1;
              goto LABEL_13;
            }
          }
        }
      }
    }
  }
  return 0;
}

