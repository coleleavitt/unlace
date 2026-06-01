__int64 __fastcall sub_501F0(unsigned __int64 a1, __int64 *a2, __int64 a3, unsigned int a4, signed int a5)
{
  const __m128i *v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rdx
  unsigned int v11; // ebx
  char v13; // bl
  char v14; // cl
  unsigned __int32 v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int32 v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  _BYTE *v24; // rax
  unsigned __int32 v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int32 v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int32 v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int32 v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int32 v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int32 v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int16 v43; // dx
  unsigned __int32 v44; // r13d
  __int64 v45; // rdx
  __int64 v46; // rax
  __int16 v47; // dx
  unsigned __int32 v48; // r13d
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int32 v53; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v54; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v55; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v56; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v57; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v58; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v59; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v60; // [rsp+Ch] [rbp-DCh]
  unsigned __int32 v61; // [rsp+14h] [rbp-D4h] BYREF
  __int64 *v62; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v63[8]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v64[24]; // [rsp+60h] [rbp-88h] BYREF
  int v65; // [rsp+78h] [rbp-70h]
  __int64 v66; // [rsp+80h] [rbp-68h] BYREF
  __int128 v67; // [rsp+88h] [rbp-60h]
  char v68; // [rsp+98h] [rbp-50h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)v63, byte_7FBE9, 0x400u);
  sub_46BB0((__int64)v63, *(_DWORD *)(a1 + 8), a3);
  sub_46AA0((__int64)v63, a4);
  sub_46AA0((__int64)v63, a5);
  memset(v64, 0, sizeof(v64));
  v8 = (const __m128i *)sub_48F20(a1, 0xDu, 2u, (__int64)v63, (__int64)v64);
  v62 = (__int64 *)v8;
  if ( v8 )
  {
    v9 = _mm_loadl_epi64(v8);
    v10 = v8->m128i_i64[1];
    v65 = 0;
    v66 = 0;
    *(_QWORD *)&v64[16] = v10;
    *(__m128i *)v64 = _mm_unpacklo_epi64((__m128i)a1, v9);
    v67 = 0;
    v68 = byte_7FBE9;
    if ( a2 )
    {
      if ( !v10 )
        goto LABEL_4;
      v13 = *(_BYTE *)v9.m128i_i64[0];
      v65 = 1;
      if ( byte_7FBE9 )
        sub_1FAD0(&v66);
      if ( !(unsigned __int8)sub_46430((__int64)v64, &v61, 1) )
        goto LABEL_4;
      if ( v61 != a5 )
        goto LABEL_4;
      v14 = v13 - 66;
      if ( (unsigned __int8)(v13 - 66) > 0x32u )
        goto LABEL_4;
      if ( ((1LL << v14) & 0x1020197) != 0 )
      {
        v20 = a5 - 1;
        v61 = a5 - 1;
        if ( a5 > 0 )
        {
          v21 = a2[1];
          v22 = *a2;
          v23 = v21 + 1;
          if ( a2[2] < (unsigned __int64)(v21 + 1) )
          {
            v51 = qvector_reserve();
            v21 = a2[1];
            v20 = a5 - 1;
            *a2 = v51;
            v22 = v51;
            v23 = v21 + 1;
          }
          a2[1] = v23;
          v24 = (_BYTE *)(v22 + 16 * v21);
          *v24 = v13;
          switch ( v13 )
          {
            case 'B':
              while ( 2 )
              {
                v53 = v20;
                v25 = v20 - 1;
                if ( !(unsigned __int8)sub_46860((__int64)v64, v24 + 8, 1) )
                  goto LABEL_4;
                v61 = v25;
                if ( v53 )
                {
                  v26 = a2[1];
                  v27 = *a2;
                  if ( a2[2] < (unsigned __int64)(v26 + 1) )
                  {
                    v27 = qvector_reserve();
                    v26 = a2[1];
                    *a2 = v27;
                  }
                  a2[1] = v26 + 1;
                  v24 = (_BYTE *)(16 * v26 + v27);
                  *v24 = 66;
                  v20 = v25;
                  continue;
                }
                goto LABEL_22;
              }
            case 'C':
              while ( 2 )
              {
                if ( *(_QWORD *)&v64[16] < (unsigned __int64)(v65 + 2) )
                  goto LABEL_4;
                v47 = *(_WORD *)(*(_QWORD *)&v64[8] + v65);
                v65 += 2;
                *((_WORD *)v24 + 4) = __ROL2__(v47, 8);
                if ( v68 )
                {
                  v60 = v20;
                  sub_1FAD0(&v66);
                  v20 = v60;
                }
                v48 = v20 - 1;
                v61 = v20 - 1;
                if ( v20 )
                {
                  v49 = a2[1];
                  v50 = *a2;
                  if ( a2[2] < (unsigned __int64)(v49 + 1) )
                  {
                    v50 = qvector_reserve();
                    v49 = a2[1];
                    *a2 = v50;
                    v20 = v48;
                    a2[1] = v49 + 1;
                  }
                  else
                  {
                    a2[1] = v49 + 1;
                    --v20;
                  }
                  v24 = (_BYTE *)(16 * v49 + v50);
                  *v24 = 67;
                  continue;
                }
                goto LABEL_22;
              }
            case 'D':
              while ( 2 )
              {
                v57 = v20;
                v37 = v20 - 1;
                if ( !(unsigned __int8)sub_468D0((__int64)v64, (__int64 *)v24 + 1, 1) )
                  goto LABEL_4;
                v61 = v37;
                if ( v57 )
                {
                  v38 = a2[1];
                  v39 = *a2;
                  if ( a2[2] < (unsigned __int64)(v38 + 1) )
                  {
                    v39 = qvector_reserve();
                    v38 = a2[1];
                    *a2 = v39;
                  }
                  a2[1] = v38 + 1;
                  v24 = (_BYTE *)(16 * v38 + v39);
                  *v24 = 68;
                  v20 = v37;
                  continue;
                }
                goto LABEL_22;
              }
            case 'F':
              while ( 2 )
              {
                v58 = v20;
                v40 = v20 - 1;
                if ( !(unsigned __int8)sub_46430((__int64)v64, (unsigned __int32 *)v24 + 2, 1) )
                  goto LABEL_4;
                v61 = v40;
                if ( v58 )
                {
                  v41 = a2[1];
                  v42 = *a2;
                  if ( a2[2] < (unsigned __int64)(v41 + 1) )
                  {
                    v42 = qvector_reserve();
                    v41 = a2[1];
                    *a2 = v42;
                  }
                  a2[1] = v41 + 1;
                  v24 = (_BYTE *)(16 * v41 + v42);
                  *v24 = 70;
                  v20 = v40;
                  continue;
                }
                goto LABEL_22;
              }
            case 'I':
              while ( 2 )
              {
                v55 = v20;
                v31 = v20 - 1;
                if ( !(unsigned __int8)sub_46430((__int64)v64, (unsigned __int32 *)v24 + 2, 1) )
                  goto LABEL_4;
                v61 = v31;
                if ( v55 )
                {
                  v32 = a2[1];
                  v33 = *a2;
                  if ( a2[2] < (unsigned __int64)(v32 + 1) )
                  {
                    v33 = qvector_reserve();
                    v32 = a2[1];
                    *a2 = v33;
                  }
                  a2[1] = v32 + 1;
                  v24 = (_BYTE *)(16 * v32 + v33);
                  *v24 = 73;
                  v20 = v31;
                  continue;
                }
                goto LABEL_22;
              }
            case 'J':
              while ( 2 )
              {
                v56 = v20;
                v34 = v20 - 1;
                if ( !(unsigned __int8)sub_468D0((__int64)v64, (__int64 *)v24 + 1, 1) )
                  goto LABEL_4;
                v61 = v34;
                if ( v56 )
                {
                  v35 = a2[1];
                  v36 = *a2;
                  if ( a2[2] < (unsigned __int64)(v35 + 1) )
                  {
                    v36 = qvector_reserve();
                    v35 = a2[1];
                    *a2 = v36;
                  }
                  a2[1] = v35 + 1;
                  v24 = (_BYTE *)(16 * v35 + v36);
                  *v24 = 74;
                  v20 = v34;
                  continue;
                }
                goto LABEL_22;
              }
            case 'S':
              while ( 2 )
              {
                if ( *(_QWORD *)&v64[16] < (unsigned __int64)(v65 + 2) )
                  goto LABEL_4;
                v43 = *(_WORD *)(*(_QWORD *)&v64[8] + v65);
                v65 += 2;
                *((_WORD *)v24 + 4) = __ROL2__(v43, 8);
                if ( v68 )
                {
                  v59 = v20;
                  sub_1FAD0(&v66);
                  v20 = v59;
                }
                v44 = v20 - 1;
                v61 = v20 - 1;
                if ( v20 )
                {
                  v45 = a2[1];
                  v46 = *a2;
                  if ( a2[2] < (unsigned __int64)(v45 + 1) )
                  {
                    v46 = qvector_reserve();
                    v45 = a2[1];
                    *a2 = v46;
                    v20 = v44;
                    a2[1] = v45 + 1;
                  }
                  else
                  {
                    a2[1] = v45 + 1;
                    --v20;
                  }
                  v24 = (_BYTE *)(16 * v45 + v46);
                  *v24 = 83;
                  continue;
                }
                goto LABEL_22;
              }
            case 'Z':
              break;
            default:
              goto LABEL_4;
          }
          while ( 1 )
          {
            v54 = v20;
            v28 = v20 - 1;
            if ( !(unsigned __int8)sub_46B40((__int64)v64, v24 + 8) )
              goto LABEL_4;
            v61 = v28;
            if ( !v54 )
              break;
            v29 = a2[1];
            v30 = *a2;
            if ( a2[2] < (unsigned __int64)(v29 + 1) )
            {
              v30 = qvector_reserve();
              v29 = a2[1];
              *a2 = v30;
            }
            a2[1] = v29 + 1;
            v24 = (_BYTE *)(16 * v29 + v30);
            *v24 = 90;
            v20 = v28;
          }
        }
      }
      else
      {
        v15 = a5 - 1;
        if ( ((1LL << v14) & 0x6042202000400LL) == 0 )
        {
LABEL_4:
          v11 = 0;
LABEL_5:
          sub_43EB0((__int64)v64);
          goto LABEL_6;
        }
        while ( 1 )
        {
          v61 = v15;
          if ( (int)(v15 + 1) <= 0 )
            break;
          v16 = a2[1];
          v17 = *a2;
          v18 = v16 + 1;
          if ( a2[2] < (unsigned __int64)(v16 + 1) )
          {
            v19 = qvector_reserve();
            v16 = a2[1];
            *a2 = v19;
            v17 = v19;
            v18 = v16 + 1;
          }
          a2[1] = v18;
          --v15;
          if ( !(unsigned __int8)sub_473C0((__int64)v64, (__m128i *)(16 * v16 + v17)) )
            goto LABEL_4;
        }
      }
    }
LABEL_22:
    v11 = 1;
    goto LABEL_5;
  }
  v11 = 0;
LABEL_6:
  sub_44B80(&v62);
  qfree();
  if ( v63[4] )
  {
    v63[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v11;
}

