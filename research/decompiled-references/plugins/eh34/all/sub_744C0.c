__int64 __fastcall sub_744C0(
        __int64 a1,
        __int64 (__fastcall ***a2)(__int64 a1),
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned __int64 v8; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 (__fastcall **v15)(__int64); // rdi
  __int64 (__fastcall *v16)(__int64); // rdx
  __int64 (__fastcall ***v17)(__int64); // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  unsigned __int8 v19; // cl
  int v20; // eax
  int v21; // r13d
  int v22; // eax
  int v23; // eax
  __m128i v24; // xmm0
  unsigned __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 (__fastcall **v27)(__int64); // rdi
  __int64 (__fastcall *v28)(__int64); // rdx
  __int64 (__fastcall *v29)(__int64); // rdi
  __int64 (__fastcall *v30)(__int64); // rax
  unsigned __int16 v31; // ax
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // [rsp+7h] [rbp-91h]
  unsigned __int8 v34; // [rsp+7h] [rbp-91h]
  unsigned __int8 v35; // [rsp+7h] [rbp-91h]
  unsigned __int64 v36; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-80h]
  char v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  __m128i v40; // [rsp+38h] [rbp-60h] BYREF
  char v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v8 = a3 + 1;
  if ( a3 == -1 )
  {
    sub_19A90((__int64)&v39, (__int64)"[%a,%a): bad range", a4, a5);
    v11 = v39;
    v12 = _mm_loadu_si128(&v40);
    goto LABEL_6;
  }
  sub_74B30(&v36, a2 + 2, a3);
  if ( !v38 )
  {
LABEL_26:
    sub_19A90((__int64)&v39, (__int64)"[%a,%a): no associated segment", a4, a5);
    v11 = v39;
    v12 = _mm_loadu_si128(&v40);
    goto LABEL_6;
  }
  if ( a3 < v37 && a3 >= v36 )
  {
    v14 = **a2;
    if ( v14 == sub_15B80 )
    {
      v15 = a2[1];
      v16 = *(__int64 (__fastcall **)(__int64))*v15;
      if ( v16 != v14 )
        goto LABEL_25;
      v17 = (__int64 (__fastcall ***)(__int64))v15[1];
      v18 = **v17;
      if ( v18 != v16 )
      {
        v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v18)(
                v17,
                a3,
                v16,
                v10,
                v36);
        goto LABEL_13;
      }
      v15 = v17[1];
      v16 = *(__int64 (__fastcall **)(__int64))*v15;
      if ( v16 == v18 )
        v19 = (**(__int64 (__fastcall ***)(__int64 (__fastcall *)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v15[1])(
                v15[1],
                a3,
                v16,
                v10,
                v36);
      else
LABEL_25:
        v19 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v16)(
                v15,
                a3,
                v16,
                v10,
                v36);
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), __int64, unsigned __int64))v14)(
              a2,
              a3,
              sub_15B80,
              v10,
              v36);
    }
LABEL_13:
    switch ( v19 & 0xF )
    {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 0xA:
      case 0xC:
      case 0xE:
        *(_QWORD *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)a1 = v19 >> 1;
        return a1;
      case 1:
      case 5:
      case 9:
      case 0xD:
        v33 = v19;
        sub_73900((__int64)&v39, (__int64)a2, v8, a4, a5, a6, a7);
        if ( v41 )
          goto LABEL_24;
        v20 = (unsigned __int8)v39;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = 2;
        *(_DWORD *)a1 = (v33 >> 2) | (v20 << 6);
        return a1;
      case 3:
      case 0xB:
        if ( a3 + 3 < v8 )
        {
          sub_19A90((__int64)&v39, (__int64)"[%a,%a): bad range", a4, a5);
          v11 = v39;
          v12 = _mm_loadu_si128(&v40);
          goto LABEL_6;
        }
        v35 = v19;
        sub_74B30(&v36, a2 + 2, v8);
        if ( !v38 )
          goto LABEL_26;
        v25 = a3 + 2;
        if ( v25 < v36 || v25 >= v37 )
          break;
        v26 = (*a2)[1];
        if ( v26 == sub_15AD0 )
        {
          v27 = a2[1];
          v28 = *((__int64 (__fastcall **)(__int64))*v27 + 1);
          if ( v28 != v26 )
            goto LABEL_40;
          v29 = v27[1];
          v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL);
          if ( v30 != v28 )
          {
            v31 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD, unsigned __int64, unsigned __int64))v30)(
                    v29,
                    v8,
                    v28,
                    v35,
                    v36,
                    v37);
            v32 = v35;
            goto LABEL_39;
          }
          v27 = *((__int64 (__fastcall ***)(__int64))v29 + 1);
          v28 = *((__int64 (__fastcall **)(__int64))*v27 + 1);
          if ( v28 == v30 )
          {
            v31 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)v27[1] + 8LL))(
                    v27[1],
                    v8,
                    v28,
                    v35,
                    v36,
                    v37);
            v32 = v35;
          }
          else
          {
LABEL_40:
            v31 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD, unsigned __int64, unsigned __int64))v28)(
                    v27,
                    v8,
                    v28,
                    v35,
                    v36,
                    v37);
            v32 = v35;
          }
        }
        else
        {
          v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64), unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD, unsigned __int64, unsigned __int64))v26)(
                  a2,
                  v8,
                  sub_15AD0,
                  v35,
                  v36,
                  v37);
          v32 = v35;
        }
LABEL_39:
        *(_QWORD *)(a1 + 8) = 3;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)a1 = (v32 >> 3) | (32 * v31);
        return a1;
      case 7:
        v34 = v19;
        sub_73900((__int64)&v39, (__int64)a2, v8, a4, a5, a6, a7);
        if ( v41 )
          goto LABEL_24;
        v21 = (unsigned __int8)v39;
        sub_73AA0((__int64)&v39, a2, a3 + 2, a4, a5, a6, a7);
        if ( v41 )
          goto LABEL_24;
        v22 = (unsigned __int16)v39;
        *(_QWORD *)(a1 + 8) = 4;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)a1 = (v34 >> 4) | (16 * v21) | (v22 << 12);
        return a1;
      case 0xF:
        sub_73750((__int64)&v39, a2, v8, a4, a5, a6, a7);
        if ( v41 )
        {
LABEL_24:
          *(_QWORD *)a1 = v39;
          v24 = _mm_loadu_si128(&v40);
          *(_BYTE *)(a1 + 24) = 1;
          *(__m128i *)(a1 + 8) = v24;
        }
        else
        {
          v23 = v39;
          *(_QWORD *)(a1 + 8) = 5;
          *(_BYTE *)(a1 + 24) = 0;
          *(_DWORD *)a1 = v23;
        }
        return a1;
    }
  }
  sub_19A90((__int64)&v39, (__int64)"[%a,%a): does not fit in segment [%a,%a)", a4, a5, a6, a7);
  v11 = v39;
  v12 = _mm_loadu_si128(&v40);
LABEL_6:
  *(_QWORD *)a1 = v11;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v12;
  return a1;
}
