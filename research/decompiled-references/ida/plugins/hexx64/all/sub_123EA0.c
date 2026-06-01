unsigned __int64 __fastcall sub_123EA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, double a6)
{
  __int64 *v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // r12d
  __int64 v14; // r10
  __int64 (*v15)(); // rax
  char v16; // al
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rbp
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rbx
  __int64 v34; // rbp
  int v35; // r8d
  __int64 v36; // rdx
  __int128 v37; // rdi
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  int v40; // edi
  __int128 v41; // rdi
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int128 v47; // rdi
  int v48; // edx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // [rsp+0h] [rbp-98h]
  unsigned __int64 v59; // [rsp+0h] [rbp-98h]
  unsigned __int64 v60; // [rsp+0h] [rbp-98h]
  __int64 v61; // [rsp+0h] [rbp-98h]
  __int64 v62; // [rsp+8h] [rbp-90h]
  __int64 v63; // [rsp+8h] [rbp-90h]
  __int64 v64; // [rsp+8h] [rbp-90h]
  int v65; // [rsp+1Ch] [rbp-7Ch] BYREF
  __m128i v66; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v67)(); // [rsp+30h] [rbp-68h] BYREF
  __int128 v68; // [rsp+38h] [rbp-60h] BYREF
  __int128 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  while ( 2 )
  {
    v6 = a2;
    v7 = a1;
    v8 = a3;
    v58 = a4;
    v70 = __readfsqword(0x28u);
    v9 = a5;
    v10 = HIWORD(a5);
LABEL_2:
    v11 = *(unsigned __int16 *)(v8 + 4);
    v12 = v9 + v10;
    LOWORD(v13) = 8 * v11;
    if ( (unsigned __int16)v12 > (unsigned __int16)(8 * v11) )
      v12 = 8 * v11;
    if ( (unsigned __int16)v12 < (unsigned __int16)v9 )
    {
      v10 = 0;
      v9 = 0;
    }
    else
    {
LABEL_5:
      v10 = v12 - v9;
    }
    v14 = *(_QWORD *)(*(_QWORD *)(v7 + 480) + 112LL);
    v15 = *(__int64 (**)())(*(_QWORD *)v14 + 56LL);
    if ( v15 != sub_11B400 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(v7 + 480) + 112LL);
      v16 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _QWORD, _QWORD))v15)(
              v14,
              v6,
              v7,
              v8,
              v58,
              (v10 << 16) | (unsigned __int16)v9);
      v14 = v62;
      if ( v16 )
        return v70 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)v8 )
    {
      case 1:
        if ( (_WORD)v10 == (_WORD)v13 && !(_WORD)v9 )
        {
          v48 = *(_DWORD *)(v8 + 4);
          v49 = *(_DWORD *)(v8 + 8);
          v67 = nullptr;
          *(_QWORD *)&v68 = 0;
          sub_63E80((__int64 *)&v67, v49, v48, a6);
          *((_QWORD *)&v68 + 1) = 0;
          v69 = 0;
          sub_64280(v6, (__int64 *)&v67, 0.0);
          sub_316CB0(v6 + 2, (__int64 **)&v68 + 1, v50, v51);
          if ( *((_QWORD *)&v68 + 1) )
          {
            *(_QWORD *)&v69 = 0;
            qfree(*((__int64 *)&v68 + 1));
          }
LABEL_20:
          qfree((__int64)v67);
        }
        else if ( (unsigned __int8)sub_11BC00(
                                     &v65,
                                     &v66,
                                     *(_QWORD *)(v7 + 480),
                                     v8,
                                     (v10 << 16) | (unsigned __int16)v9,
                                     a6) )
        {
          v18 = *(_DWORD *)(v8 + 8) + v65;
          v67 = nullptr;
          *(_QWORD *)&v68 = 0;
          sub_63E80((__int64 *)&v67, v18, v66.m128i_i32[0], a6);
          *((_QWORD *)&v68 + 1) = 0;
          v69 = 0;
          sub_64280(v6, (__int64 *)&v67, 0.0);
          sub_316CB0(v6 + 2, (__int64 **)&v68 + 1, v19, v20);
          if ( *((_QWORD *)&v68 + 1) )
          {
            *(_QWORD *)&v69 = 0;
            qfree(*((__int64 *)&v68 + 1));
          }
          qfree((__int64)v67);
        }
        return v70 - __readfsqword(0x28u);
      case 4:
        sub_124680((__int64)&v67, v7, *(_QWORD *)(v8 + 8), v58);
        sub_64280(v6, (__int64 *)&v67, a6);
        sub_316CB0(v6 + 2, (__int64 **)&v68 + 1, v21, v22);
        if ( *((_QWORD *)&v68 + 1) )
        {
          *(_QWORD *)&v69 = 0;
          qfree(*((__int64 *)&v68 + 1));
        }
        goto LABEL_20;
      case 5:
        v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(**(_QWORD **)(v8 + 8) + 1440LL) + *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL));
        goto LABEL_22;
      case 6:
        v26 = *(int *)(v8 + 4);
        if ( (_DWORD)v26 == -1 )
          return v70 - __readfsqword(0x28u);
        v60 = *(_QWORD *)(v8 + 8);
        v27 = sub_343460(*(_QWORD *)(v7 + 480), v60, v26);
        v23 = v60;
        if ( v27 )
          return v70 - __readfsqword(0x28u);
LABEL_22:
        if ( (_WORD)v10 == (_WORD)v13 && !(_WORD)v9 )
        {
          v24 = *(int *)(v8 + 4);
          v25 = v23;
        }
        else
        {
          v59 = v23;
          if ( !(unsigned __int8)sub_11BC00(
                                   v66.m128i_i32,
                                   &v67,
                                   *(_QWORD *)(v7 + 480),
                                   v8,
                                   (v10 << 16) | (unsigned __int16)v9,
                                   a6) )
            return v70 - __readfsqword(0x28u);
          v24 = (int)v67;
          v25 = v59 + v66.m128i_i32[0];
        }
        return sub_122B20(v6, v25, v24);
      case 8:
        v28 = *(_QWORD *)(v8 + 8);
        v63 = v14;
        v29 = sub_32FB50(v28, v6, v7, v58);
        v32 = v63;
        if ( v29 )
        {
          if ( !*(_DWORD *)(v28 + 20) )
          {
            if ( (v58 & 1) == 0 )
              return v70 - __readfsqword(0x28u);
            goto LABEL_48;
          }
        }
        else
        {
          if ( (v58 & 1) == 0 )
          {
            if ( !*(_DWORD *)(v28 + 20) )
              return v70 - __readfsqword(0x28u);
            goto LABEL_33;
          }
          v67 = nullptr;
          a6 = 0.0;
          v68 = 0;
          v52 = *(_QWORD *)(v28 + 224);
          if ( v52 )
          {
            *((_QWORD *)&v68 + 1) = *(_QWORD *)(v28 + 224);
            v67 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v52, (__int64)v6, v30, v31);
            memcpy(v67, *(const void **)(v28 + 216), 16 * v52);
            *(_QWORD *)&v68 = v52;
            v32 = v63;
          }
          v53 = *(int *)(v28 + 12);
          v64 = v32;
          v54 = *(_DWORD *)(v28 + 16) - v53;
          v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 1496LL) + 24LL) + 16LL)
              & (*(_QWORD *)(*(_QWORD *)(v7 + 64) + 1440LL) + v53);
          v66.m128i_i64[1] = v54;
          v66.m128i_i64[0] = v55;
          sub_317BD0((__int64 *)&v67, &v66);
          sub_316CB0(v6 + 2, (__int64 **)&v67, v56, v57);
          v32 = v64;
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree((__int64)v67);
            v32 = v64;
          }
          if ( !*(_DWORD *)(v28 + 20) )
          {
LABEL_48:
            v61 = v32;
            sub_64280(v6, (__int64 *)(v32 + 144), a6);
            return sub_316CB0(v6 + 2, (__int64 **)(v61 + 160), v45, v46);
          }
        }
LABEL_33:
        v33 = *(_QWORD *)(v28 + 24);
        v34 = v33 + 80LL * *(_QWORD *)(v28 + 32);
        while ( v33 != v34 )
        {
          v35 = *(_DWORD *)(v33 + 4);
          v36 = v33;
          *((_QWORD *)&v37 + 1) = v6;
          *(_QWORD *)&v37 = v7;
          v33 += 80;
          sub_123EA0(v37, v36, v58, v35 << 19);
        }
        return v70 - __readfsqword(0x28u);
      case 9:
        v38 = **(_QWORD ***)(v8 + 8);
        if ( (*(_DWORD *)v38 & 4) != 0 || (*(_DWORD *)v38 & 0xC0000) == 0x40000 )
          return v70 - __readfsqword(0x28u);
        return sub_11BCA0(v38, (__int64)v6, v8, (v10 << 16) | (unsigned __int16)v9, a6);
      case 0xA:
        v39 = *(_QWORD *)(v8 + 8);
        v40 = *(_DWORD *)(v39 + 16);
        if ( v40 <= 0 )
        {
          if ( !v40 || *(_BYTE *)v39 != 1 )
            return v70 - __readfsqword(0x28u);
          a4 = v58;
          a3 = *(_QWORD *)(v8 + 8);
          a1 = v7;
          a2 = v6;
          a5 = -65536;
          continue;
        }
        sub_123A40((__int64)&v67, (unsigned __int8 *)v39, a3, a4);
        *((_QWORD *)&v47 + 1) = v6;
        *(_QWORD *)&v47 = v7;
        HIDWORD(v67) = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
        sub_123EA0(v47, (__int64)&v67, v58, 0xFFFF0000);
        sub_11CDA0((__int64)&v67);
        return v70 - __readfsqword(0x28u);
      case 0xE:
        *((_QWORD *)&v41 + 1) = v6;
        *(_QWORD *)&v41 = v7;
        sub_123EA0(v41, *(_QWORD *)(v8 + 8), v58, (v10 << 16) | (unsigned __int16)v9);
        a3 = (unsigned __int16)v9;
        v42 = (8 * *(_DWORD *)(v8 + 4)) >> 1;
        if ( (unsigned __int16)v9 >= v42 )
        {
          v9 -= v42;
          v8 = *(_QWORD *)(v8 + 8) + 16LL;
          goto LABEL_2;
        }
        v43 = v42 - (unsigned __int16)v9;
        if ( (unsigned __int16)v10 >= v43 )
        {
          a3 = *(_QWORD *)(v8 + 8);
          v12 = v10 - v43;
          v8 = a3 + 16;
          v13 = 8 * *(_DWORD *)(a3 + 20);
          if ( (unsigned __int16)v12 > (unsigned __int16)(8 * *(_WORD *)(a3 + 20)) )
            v12 = 8 * *(_DWORD *)(a3 + 20);
          v9 = 0;
        }
        else
        {
          v44 = *(_QWORD *)(v8 + 8);
          v12 = 0;
          v9 = 0;
          v8 = v44 + 16;
          v13 = 8 * *(_DWORD *)(v44 + 20);
        }
        goto LABEL_5;
      case 0xF:
        *(_QWORD *)&v68 = v7;
        v67 = &off_4DD5C0;
        *((_QWORD *)&v68 + 1) = v6;
        LOWORD(v69) = v9;
        WORD1(v69) = v10;
        DWORD1(v69) = v58;
        sub_11E540((_BYTE *)v8, a6);
        return v70 - __readfsqword(0x28u);
      default:
        return v70 - __readfsqword(0x28u);
    }
  }
}

