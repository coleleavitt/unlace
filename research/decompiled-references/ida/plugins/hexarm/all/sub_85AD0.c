__int64 __fastcall sub_85AD0(const void ***a1, __int64 a2)
{
  unsigned int v4; // eax
  const void **v5; // rdi
  unsigned __int8 *v6; // rax
  __int64 v7; // rax
  const void **v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rax
  __int64 i; // r13
  __int16 v20; // dx
  __int64 v21; // rax
  const void **v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r14d
  int v28; // r13d
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r15
  bool v33; // si
  _BYTE *v34; // rax
  const void **v35; // rsi
  __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-58h] BYREF
  __int128 v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  while ( 2 )
  {
    v4 = unpack_dd();
    if ( v4 <= 0x45 )
    {
      *(_DWORD *)(a2 + 8) = v4;
      v5 = *a1;
      if ( *((_DWORD *)a1 + 4) > 3u && (v6 = (unsigned __int8 *)*v5, *v5 < (*a1)[1]) )
      {
        v13 = *v6;
        v9 = -1;
        *v5 = v6 + 1;
        if ( v13 > 1u || (v7 = unpack_dq(), v8 = a1[1], v9 = (__int64)*v8 + ~v7, v13) )
        {
LABEL_7:
          *(_QWORD *)a2 = v9;
          v10 = unpack_dd();
          *(_DWORD *)(a2 + 12) = v10;
          if ( *((_DWORD *)a1 + 4) > 2u )
            *(_DWORD *)(a2 + 12) = v10 - 1;
          sub_7BD10(&v37, a1);
          copy_tinfo_t();
          clear_tinfo_t();
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
              v11 = j__qalloc_or_throw();
              *(_QWORD *)v11 = -1;
              *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v11 + 40) = 0;
              *(_QWORD *)(v11 + 48) = 0;
              *(_DWORD *)(v11 + 56) = 0;
              *(_OWORD *)(v11 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v11;
              if ( !(unsigned __int8)sub_85AD0(a1, v11) )
                return 0;
              v14 = j__qalloc_or_throw();
              *(_QWORD *)v14 = -1;
              *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v14 + 40) = 0;
              *(_QWORD *)(v14 + 48) = 0;
              *(_DWORD *)(v14 + 56) = 0;
              *(_OWORD *)(v14 + 24) = 0;
              *(_QWORD *)(a2 + 32) = v14;
              if ( !(unsigned __int8)sub_85AD0(a1, v14) )
                return 0;
              if ( *(_DWORD *)(a2 + 8) != 16 )
                return 1;
              v36 = j__qalloc_or_throw();
              *(_QWORD *)v36 = -1;
              *(_QWORD *)(v36 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v36 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v36 + 40) = 0;
              *(_QWORD *)(v36 + 48) = 0;
              *(_DWORD *)(v36 + 56) = 0;
              *(_OWORD *)(v36 + 24) = 0;
              *(_QWORD *)(a2 + 40) = v36;
              a2 = v36;
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
              v24 = j__qalloc_or_throw();
              *(_QWORD *)v24 = -1;
              *(_QWORD *)(v24 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v24 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v24 + 40) = 0;
              *(_QWORD *)(v24 + 48) = 0;
              *(_DWORD *)(v24 + 56) = 0;
              *(_OWORD *)(v24 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v24;
              if ( !(unsigned __int8)sub_85AD0(a1, v24) )
                return 0;
              v25 = qalloc_or_throw();
              *(_QWORD *)v25 = 0;
              *(_QWORD *)(v25 + 24) = 0;
              *(_DWORD *)(v25 + 32) = 0;
              *(_OWORD *)(v25 + 8) = 0;
              *(_QWORD *)(a2 + 32) = v25;
              sub_7BD10(&v37, a1);
              copy_tinfo_t();
              clear_tinfo_t();
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) = unpack_dd();
              v26 = unpack_dd();
              v27 = v26;
              if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v26 )
                return 0;
              if ( v26 )
              {
                v28 = 0;
                do
                {
                  v29 = *(__int64 **)(a2 + 32);
                  v30 = v29[1];
                  v31 = *v29;
                  if ( v29[2] < (unsigned __int64)(v30 + 1) )
                  {
                    v31 = qvector_reserve();
                    *v29 = v31;
                    v30 = v29[1];
                  }
                  v32 = v31 + 72 * v30;
                  v33 = 0;
                  *(_QWORD *)v32 = -1;
                  *(_DWORD *)(v32 + 8) = 0;
                  *(_QWORD *)(v32 + 12) = -1;
                  *(_QWORD *)(v32 + 40) = 0;
                  *(_QWORD *)(v32 + 48) = 0;
                  *(_DWORD *)(v32 + 56) = 0;
                  *(_BYTE *)(v32 + 60) = 0;
                  *(_QWORD *)(v32 + 64) = 0;
                  *(_OWORD *)(v32 + 24) = 0;
                  ++v29[1];
                  v34 = **a1;
                  if ( v34 < (*a1)[1] )
                    v33 = *v34++ != 0;
                  **a1 = v34;
                  *(_BYTE *)(v32 + 60) = v33;
                  sub_7BD10(&v37, a1);
                  copy_tinfo_t();
                  ++v28;
                  clear_tinfo_t();
                  sub_85AD0(a1, v32);
                }
                while ( v28 != v27 );
              }
              return 1;
            case 0x3B:
              *(_DWORD *)(a2 + 32) = unpack_dd();
              goto LABEL_20;
            case 0x3C:
              *(_DWORD *)(a2 + 32) = unpack_dd();
LABEL_19:
              *(_DWORD *)(a2 + 40) = unpack_dd();
LABEL_20:
              v15 = j__qalloc_or_throw();
              *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)v15 = -1;
              *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v15 + 40) = 0;
              *(_QWORD *)(v15 + 48) = 0;
              *(_DWORD *)(v15 + 56) = 0;
              *(_OWORD *)(v15 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v15;
              a2 = v15;
              continue;
            case 0x3D:
              v16 = j__qalloc_or_throw();
              *(_QWORD *)v16 = 0;
              *(_QWORD *)(v16 + 8) = 0;
              *(_QWORD *)(v16 + 16) = 0;
              *(_QWORD *)(v16 + 40) = 0;
              *(_OWORD *)(v16 + 24) = 0;
              *(_QWORD *)(a2 + 24) = v16;
              sub_81210(a1, v16);
              return 1;
            case 0x3E:
              v17 = 0;
              v18 = j__qalloc_or_throw();
              *(_QWORD *)(a2 + 24) = v18;
              for ( i = v18; ; i = *(_QWORD *)(a2 + 24) )
              {
                v20 = unpack_dw();
                v21 = v17++;
                *(_WORD *)(i + 2 * v21) = v20;
                if ( v17 == 8 )
                  break;
              }
              *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) = unpack_dd();
              return 1;
            case 0x3F:
              v22 = *a1;
              v37 = 0;
              v38 = 0;
              sub_7B840(&v37, v22, (unsigned __int64)v22[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              if ( v37 )
                goto LABEL_27;
              return 1;
            case 0x40:
              *(_QWORD *)(a2 + 24) = (char *)*a1[1] + unpack_dq();
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x41:
              *(_QWORD *)(a2 + 24) = a1[1][1];
              *(_DWORD *)(a2 + 32) = unpack_dd();
              *(_DWORD *)(a2 + 40) = unpack_dd();
              return 1;
            case 0x42:
              v23 = (_QWORD *)j__qalloc_or_throw();
              *v23 = -1;
              v23[1] = -4294967226LL;
              v23[2] = 0xFFFFFFFFLL;
              v23[3] = 0;
              *(_QWORD *)(a2 + 24) = v23;
              return sub_84C50((__int64)a1, (__int64)v23);
            case 0x44:
              v35 = *a1;
              v37 = 0;
              v38 = 0;
              sub_7B840(&v37, v35, (unsigned __int64)v35[1]);
              *(_QWORD *)(a2 + 24) = qstrdup();
              if ( v37 )
              {
LABEL_27:
                *(_QWORD *)&v38 = 0;
                qfree();
              }
              return 1;
            default:
              *(_DWORD *)(a2 + 8) = 0;
              if ( !under_debugger )
                sub_3835A0(52347);
              BUG();
          }
        }
      }
      else
      {
        v7 = unpack_dq();
        v8 = a1[1];
      }
      v9 = (__int64)*v8 + v7;
      goto LABEL_7;
    }
    return 0;
  }
}

