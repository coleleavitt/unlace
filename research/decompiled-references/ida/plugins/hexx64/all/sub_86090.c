__int64 __fastcall sub_86090(unsigned __int8 ***a1, __int64 a2, double a3)
{
  unsigned int v5; // eax
  unsigned __int8 **v6; // rdi
  unsigned __int8 *v7; // rax
  __int64 v8; // rax
  const void **v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int8 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r12d
  __int64 v28; // rax
  __int64 i; // r13
  __int16 v30; // dx
  __int64 v31; // rax
  unsigned __int8 **v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // ecx
  unsigned int v41; // r14d
  int v42; // r13d
  __int64 *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r15
  bool v47; // si
  unsigned __int8 *v48; // rax
  unsigned __int8 **v49; // rsi
  __int64 v50; // rax
  __int64 v51; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  while ( 2 )
  {
    v5 = unpack_dd();
    if ( v5 <= 0x45 )
    {
      *(_DWORD *)(a2 + 8) = v5;
      v6 = *a1;
      if ( *((_DWORD *)a1 + 4) > 3u && (v7 = *v6, *v6 < (*a1)[1]) )
      {
        v20 = *v7;
        v10 = -1;
        *v6 = v7 + 1;
        if ( v20 > 1u || (v8 = unpack_dq(), v9 = (const void **)a1[1], v10 = (__int64)*v9 + ~v8, v20) )
        {
LABEL_7:
          *(_QWORD *)a2 = v10;
          v11 = unpack_dd();
          *(_DWORD *)(a2 + 12) = v11;
          if ( *((_DWORD *)a1 + 4) > 2u )
            *(_DWORD *)(a2 + 12) = v11 - 1;
          sub_7C2D0(&v51, (const void ***)a1);
          copy_tinfo_t();
          clear_tinfo_t();
          v12 = (*a1)[1];
          *(_DWORD *)(a2 + 56) = unpack_dd();
          switch ( *(_DWORD *)(a2 + 8) )
          {
            case 0:
            case 0x45:
              return 1;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2A:
            case 0x2B:
            case 0x2C:
            case 0x2D:
            case 0x3A:
              v15 = j__qalloc_or_throw(64, (__int64)v12, v13, v14);
              *(_QWORD *)v15 = -1;
              v16 = v15;
              *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v15 + 40) = 0;
              *(_QWORD *)(v15 + 48) = 0;
              *(_DWORD *)(v15 + 56) = 0;
              *(_OWORD *)(v15 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v15;
              if ( !(unsigned __int8)sub_86090((const void ***)a1, v15) )
                return 0;
              v21 = j__qalloc_or_throw(64, v16, v17, v18);
              *(_QWORD *)v21 = -1;
              v22 = v21;
              *(_QWORD *)(v21 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v21 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v21 + 40) = 0;
              *(_QWORD *)(v21 + 48) = 0;
              *(_DWORD *)(v21 + 56) = 0;
              *(_OWORD *)(v21 + 24) = 0;
              *(_QWORD *)(a2 + 32) = v21;
              if ( !(unsigned __int8)sub_86090((const void ***)a1, v21) )
                return 0;
              if ( *(_DWORD *)(a2 + 8) != 16 )
                return 1;
              v50 = j__qalloc_or_throw(64, v22, v23, v24);
              *(_QWORD *)v50 = -1;
              *(_QWORD *)(v50 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v50 + 40) = 0;
              *(_QWORD *)(v50 + 48) = 0;
              *(_DWORD *)(v50 + 56) = 0;
              *(_OWORD *)(v50 + 24) = 0;
              *(_QWORD *)(a2 + 40) = v50;
              a2 = v50;
              continue;
            case 0x2E:
            case 0x2F:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x43:
              goto LABEL_20;
            case 0x33:
              goto LABEL_19;
            case 0x39:
              v35 = j__qalloc_or_throw(64, (__int64)v12, v13, v14);
              *(_QWORD *)v35 = -1;
              v36 = v35;
              *(_QWORD *)(v35 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v35 + 40) = 0;
              *(_QWORD *)(v35 + 48) = 0;
              *(_DWORD *)(v35 + 56) = 0;
              *(_OWORD *)(v35 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v35;
              if ( !(unsigned __int8)sub_86090((const void ***)a1, v35) )
                return 0;
              v39 = qalloc_or_throw(40, v36, v37, v38);
              *(_QWORD *)v39 = 0;
              *(_QWORD *)(v39 + 24) = 0;
              *(_DWORD *)(v39 + 32) = 0;
              *(_OWORD *)(v39 + 8) = 0;
              *(_QWORD *)(a2 + 32) = v39;
              sub_7C2D0(&v51, (const void ***)a1);
              copy_tinfo_t();
              clear_tinfo_t();
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) = unpack_dd();
              v40 = unpack_dd();
              v41 = v40;
              if ( (*a1)[1] - **a1 < (unsigned __int64)v40 )
                return 0;
              if ( v40 )
              {
                v42 = 0;
                do
                {
                  v43 = *(__int64 **)(a2 + 32);
                  v44 = v43[1];
                  v45 = *v43;
                  if ( v43[2] < (unsigned __int64)(v44 + 1) )
                  {
                    v45 = qvector_reserve((__int64)v43, v45, v44 + 1, 72);
                    *v43 = v45;
                    v44 = v43[1];
                  }
                  v46 = v45 + 72 * v44;
                  v47 = 0;
                  *(_QWORD *)v46 = -1;
                  *(_DWORD *)(v46 + 8) = 0;
                  *(_QWORD *)(v46 + 12) = -1;
                  *(_QWORD *)(v46 + 40) = 0;
                  *(_QWORD *)(v46 + 48) = 0;
                  *(_DWORD *)(v46 + 56) = 0;
                  *(_BYTE *)(v46 + 60) = 0;
                  *(_QWORD *)(v46 + 64) = 0;
                  *(_OWORD *)(v46 + 24) = 0;
                  ++v43[1];
                  v48 = **a1;
                  if ( v48 < (*a1)[1] )
                    v47 = *v48++ != 0;
                  **a1 = v48;
                  *(_BYTE *)(v46 + 60) = v47;
                  sub_7C2D0(&v51, (const void ***)a1);
                  copy_tinfo_t();
                  ++v42;
                  clear_tinfo_t();
                  sub_86090((const void ***)a1, v46);
                }
                while ( v42 != v41 );
              }
              return 1;
            case 0x3B:
              v12 = (*a1)[1];
              *(_DWORD *)(a2 + 32) = unpack_dd();
              goto LABEL_20;
            case 0x3C:
              *(_DWORD *)(a2 + 32) = unpack_dd();
LABEL_19:
              v12 = (*a1)[1];
              *(_DWORD *)(a2 + 40) = unpack_dd();
LABEL_20:
              v25 = j__qalloc_or_throw(64, (__int64)v12, v13, v14);
              a3 = 0.0;
              *(_QWORD *)(v25 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v25 = -1;
              *(_QWORD *)(v25 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v25 + 40) = 0;
              *(_QWORD *)(v25 + 48) = 0;
              *(_DWORD *)(v25 + 56) = 0;
              *(_OWORD *)(v25 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v25;
              a2 = v25;
              continue;
            case 0x3D:
              v26 = j__qalloc_or_throw(48, (__int64)v12, v13, v14);
              *(_QWORD *)v26 = 0;
              *(_QWORD *)(v26 + 8) = 0;
              *(_QWORD *)(v26 + 16) = 0;
              *(_QWORD *)(v26 + 40) = 0;
              *(_OWORD *)(v26 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v26;
              sub_817D0((char ***)a1, v26);
              return 1;
            case 0x3E:
              v27 = 0;
              v28 = j__qalloc_or_throw(20, (__int64)v12, v13, v14);
              *(_QWORD *)(a2 + 24) = v28;
              for ( i = v28; ; i = *(_QWORD *)(a2 + 24) )
              {
                v30 = unpack_dw();
                v31 = v27++;
                *(_WORD *)(i + 2 * v31) = v30;
                if ( v27 == 8 )
                  break;
              }
              *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) = unpack_dd();
              return 1;
            case 0x3F:
              v32 = *a1;
              v51 = 0;
              v52 = 0;
              sub_7BE00(&v51, (const void **)v32, (unsigned __int64)v32[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              v33 = v51;
              if ( v51 )
                goto LABEL_27;
              return 1;
            case 0x40:
              *(_QWORD *)(a2 + 24) = &(*a1[1])[unpack_dq()];
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x41:
              *(_QWORD *)(a2 + 24) = a1[1][1];
              *(_DWORD *)(a2 + 32) = unpack_dd();
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x42:
              v34 = (_QWORD *)j__qalloc_or_throw(32, (__int64)v12, v13, v14);
              *v34 = -1;
              v34[1] = -4294967226LL;
              v34[2] = 0xFFFFFFFFLL;
              v34[3] = 0;
              *(_QWORD *)(a2 + 24) = v34;
              return sub_85210((char ***)a1, (__int64)v34, a3);
            case 0x44:
              v49 = *a1;
              v51 = 0;
              v52 = 0;
              sub_7BE00(&v51, (const void **)v49, (unsigned __int64)v49[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              v33 = v51;
              if ( v51 )
              {
LABEL_27:
                *(_QWORD *)&v52 = 0;
                qfree(v33);
              }
              return 1;
            default:
              *(_DWORD *)(a2 + 8) = 0;
              if ( !under_debugger )
                sub_383060(0xCC7Bu, a3);
              BUG();
          }
        }
      }
      else
      {
        v8 = unpack_dq();
        v9 = (const void **)a1[1];
      }
      v10 = (__int64)*v9 + v8;
      goto LABEL_7;
    }
    return 0;
  }
}

