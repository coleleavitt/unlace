_QWORD *__fastcall sub_561C0(__int64 **a1, __int64 *a2, unsigned __int8 (__fastcall ***a3)(_QWORD, _QWORD *))
{
  __int64 *v3; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // r13
  __int64 *v17; // rbx
  __int64 v18; // rbp
  bool v19; // al
  _DWORD *v20; // rbx
  int v21; // r12d
  __int64 v22; // rcx
  int v23; // eax
  void (__fastcall *v24)(_QWORD *); // rdx
  void (__fastcall *v25)(_QWORD *); // rax
  _QWORD *v26; // r15
  __int64 v27; // r14
  void *v28; // rdi
  __int64 v29; // r14
  _QWORD *v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdi
  bool v33; // r15
  _QWORD *v34; // rbp
  _QWORD *i; // r15
  _QWORD *v36; // rax
  __int64 v37; // rdi
  __int64 *v38; // rbx
  __int64 v39; // rdx
  bool v40; // al
  bool v41; // al
  unsigned __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 v45; // rax
  const __m128i *v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  const __m128i *v51; // rcx
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-1C8h]
  __int64 v57; // [rsp+0h] [rbp-1C8h]
  __int64 v58; // [rsp+0h] [rbp-1C8h]
  __int64 v60; // [rsp+10h] [rbp-1B8h]
  __int64 v61; // [rsp+18h] [rbp-1B0h]
  _QWORD v62[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD *v63; // [rsp+30h] [rbp-198h]
  __int64 v64; // [rsp+38h] [rbp-190h]
  __int64 v65; // [rsp+40h] [rbp-188h]
  __int64 v66; // [rsp+50h] [rbp-178h]
  __int64 v67; // [rsp+58h] [rbp-170h]
  __int64 v68; // [rsp+68h] [rbp-160h]
  bool v69; // [rsp+70h] [rbp-158h]
  _BYTE v70[264]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v71; // [rsp+188h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v3 = a1[1];
  if ( !v3 )
    return nullptr;
  v60 = *a2;
  v5 = (unsigned __int64)*a2 >> 63;
  if ( (int)v3 <= 0 )
  {
LABEL_20:
    v13 = **a1;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL) + 376LL) & 2) != 0 )
    {
      sub_84A60(v70);
      if ( (unsigned __int8)sub_98E20(a2, v70) )
      {
        v14 = sub_97BF0(v70);
        if ( (unsigned __int16)v14 <= 0x17u )
        {
          v15 = 8912900;
          if ( _bittest64(&v15, v14) )
          {
            sub_54A20((__int64)v62, (__int64)v70, (__int64)a3);
            v16 = v69;
            if ( v69 )
            {
              v17 = *a1;
              v18 = (__int64)&(*a1)[(_QWORD)a1[1]];
              if ( v17 != (__int64 *)v18 )
              {
                do
                {
                  v19 = v16;
                  if ( *(_DWORD *)(*v17 + 272) == 2 )
                    v19 = !sub_54EE0(v62, (_QWORD *)*v17);
                  ++v17;
                }
                while ( (__int64 *)v18 != v17 && v19 );
              }
            }
            v8 = v63;
            v68 = 0;
            v62[0] = off_C8488;
            v63 = nullptr;
            if ( v66 )
            {
              v67 = 0;
              qfree(v66);
            }
            v37 = v64;
            if ( !v64 )
              goto LABEL_67;
            goto LABEL_66;
          }
        }
      }
      sub_1B750((__int64)v70);
      v13 = **a1;
    }
    v20 = *(_DWORD **)(sub_87DA0(v13 + 8) + 216);
    if ( v20 )
    {
      v21 = v20[47];
      if ( !v20[2] )
      {
        v24 = **(void (__fastcall ***)(_QWORD *))v20;
        if ( v24 == sub_15E30 )
        {
          v25 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v20 + 16LL);
          if ( v25 == sub_15D70 )
          {
            v26 = *((_QWORD **)v20 + 16);
            *(_QWORD *)v20 = &off_C71D8;
            if ( v26 )
            {
              v27 = v26[2];
              while ( v27 )
              {
                sub_546C0(*(_QWORD **)(v27 + 24));
                v28 = (void *)v27;
                v27 = *(_QWORD *)(v27 + 16);
                operator delete(v28, 0x30u);
              }
              operator delete(v26, 0x30u);
            }
            v29 = *((_QWORD *)v20 + 19);
            while ( v29 )
            {
              v30 = (_QWORD *)v29;
              sub_54400(*(_QWORD **)(v29 + 24));
              v31 = *(_QWORD *)(v29 + 32);
              v29 = *(_QWORD *)(v29 + 16);
              if ( v31 )
              {
                v30[5] = 0;
                qfree(v31);
              }
              operator delete(v30, 0x48u);
            }
            v32 = *((_QWORD *)v20 + 12);
            if ( v32 )
            {
              *((_QWORD *)v20 + 13) = 0;
              qfree(v32);
            }
            operator delete(v20, 0xC0u);
          }
          else
          {
            v25(v20);
          }
        }
        else
        {
          v24(v20);
        }
      }
      v12 = v21 & 4;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 )
    {
      sub_84A60(v70);
      if ( (unsigned __int8)sub_98E20(a2, v70) && (unsigned __int16)sub_97BF0(v70) == 22 )
      {
        sub_54A20((__int64)v62, (__int64)v70, (__int64)a3);
        v33 = v69;
        if ( v69 )
        {
          v38 = *a1;
          v39 = (__int64)&(*a1)[(_QWORD)a1[1]];
          if ( *a1 != (__int64 *)v39 )
          {
            do
            {
              v40 = v33;
              if ( *(_DWORD *)(*v38 + 272) == 1 )
              {
                v57 = v39;
                v41 = sub_54EE0(v62, (_QWORD *)*v38);
                v39 = v57;
                v40 = !v41;
              }
              ++v38;
            }
            while ( (__int64 *)v39 != v38 && v40 );
          }
        }
        v8 = v63;
        if ( v63 )
        {
          if ( v63 == (_QWORD *)(*a1)[(_QWORD)a1[1] - 1] )
          {
            v8 = nullptr;
          }
          else
          {
            v34 = (_QWORD *)v63[36];
            for ( i = &v34[2 * v63[37]]; i != v34; v34 += 2 )
            {
              if ( !(unsigned int)sub_849A0(a2, v34) )
                break;
            }
            v36 = (_QWORD *)(v8[36] + 16LL * v8[37]);
            if ( v34 == v36 )
            {
              v42 = v8[37] + 1LL;
              v43 = *a2;
              v44 = a2[1];
              if ( v8[38] < v42 )
              {
                v58 = v8[38];
                v45 = qvector_reserve(v8 + 36, 0, v42, 16);
                v46 = (const __m128i *)v8[36];
                v47 = v45;
                v48 = v45;
                v49 = v8[37];
                v50 = v8[38];
                v51 = v46;
                v8[38] = v58;
                v52 = v49 - 1;
                if ( v52 >= 0 )
                {
                  do
                  {
                    v53 = _mm_loadu_si128(v51);
                    v48 += 16;
                    ++v51;
                    *(__m128i *)(v48 - 16) = v53;
                  }
                  while ( v52-- != 0 );
                  v46 = (const __m128i *)v8[36];
                }
                qfree(v46);
                v55 = v8[37];
                v8[36] = v47;
                v8[38] = v50;
                v36 = (_QWORD *)(v47 + 16 * v55);
              }
              *v36 = v43;
              v36[1] = v44;
              ++v8[37];
            }
            v8 = v63;
          }
        }
        v63 = nullptr;
        v62[0] = off_C8488;
        v68 = 0;
        if ( v66 )
        {
          v67 = 0;
          qfree(v66);
        }
        v37 = v64;
        if ( !v64 )
          goto LABEL_67;
LABEL_66:
        v65 = 0;
        qfree(v37);
LABEL_67:
        sub_1B750((__int64)v70);
        return v8;
      }
      sub_1B750((__int64)v70);
    }
    return nullptr;
  }
  v6 = 0;
  v7 = 8LL * (unsigned int)((_DWORD)v3 - 1) + 8;
  while ( 1 )
  {
    v8 = (_QWORD *)(*a1)[v6 / 8];
    if ( (_BYTE)v5 == (unsigned __int8)sub_84B20(v8 + 1) )
    {
      v9 = v8[29];
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v9 == -1 )
      {
        if ( under_debugger )
          BUG();
        v9 = interr(30478);
      }
      if ( (v10 & (v60 ^ v9)) == 0 )
        goto LABEL_90;
      v22 = v8[36];
      v61 = v22 + 16LL * v8[37];
      if ( v22 != v61 )
      {
        do
        {
          v56 = v22;
          v23 = sub_849A0(a2, v22);
          v22 = v56;
          if ( !v23 )
            break;
          v22 = v56 + 16;
        }
        while ( v61 != v56 + 16 );
        if ( v22 != v8[36] + 16LL * v8[37] )
        {
LABEL_90:
          if ( !a3 || (**a3)(a3, v8) )
            return v8;
        }
      }
    }
    v6 += 8LL;
    if ( v7 == v6 )
      goto LABEL_20;
  }
}

