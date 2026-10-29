__int64 __fastcall sub_30290(__int64 a1, __int64 a2)
{
  char v4; // al
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r9d
  unsigned __int64 v20; // rbx
  __int64 (__fastcall *v21)(); // r8
  char v22; // dl
  __int64 v23; // r14
  unsigned __int8 default_reftype; // al
  __int64 v25; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rsi
  char *v30; // rsi
  unsigned int v31; // [rsp+4h] [rbp-9Ch]
  unsigned int *v32; // [rsp+8h] [rbp-98h]
  unsigned int *v33; // [rsp+10h] [rbp-90h]
  void *dest; // [rsp+18h] [rbp-88h] BYREF
  __int128 v35; // [rsp+20h] [rbp-80h]
  unsigned __int64 v36; // [rsp+38h] [rbp-68h] BYREF
  __int128 v37; // [rsp+40h] [rbp-60h]
  __int64 v38; // [rsp+54h] [rbp-4Ch]
  int v39; // [rsp+5Ch] [rbp-44h]
  unsigned __int64 v40; // [rsp+60h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v35 = 0;
  v37 = 0;
  dest = 0;
  v36 = 0;
  if ( (unsigned __int8)sub_300F0(a1, "__TEXT", "__thread_starts", &v36) && (unsigned __int64)v37 > 7 )
  {
    v27 = v36;
    v20 = v37 - 4;
    v28 = v35;
    v15 = (unsigned __int64)(v37 - 4) >> 2;
    LOBYTE(v13) = *(_BYTE *)v36 & 1;
    if ( (unsigned __int64)v35 < v15 )
    {
      v30 = (char *)dest;
      if ( *((_QWORD *)&v35 + 1) < v15 )
      {
LABEL_63:
        dest = (void *)qvector_reserve(&dest, v30, v15, 4);
        v30 = (char *)dest;
        v28 = v35;
      }
      memset(&v30[4 * v28], 0, 4 * (v15 - v28));
      *(_QWORD *)&v35 = v15;
      v27 = v36;
    }
    else if ( v15 != (_QWORD)v35 )
    {
      *(_QWORD *)&v35 = v20 >> 2;
    }
    memcpy(dest, (const void *)(v27 + 4), v20 & 0xFFFFFFFFFFFFFFFCLL);
    v31 = (_BYTE)v13 == 0 ? 10 : 1;
LABEL_11:
    v8 = (unsigned __int64)dest + 4 * v35;
    v32 = (unsigned int *)dest;
    v33 = (unsigned int *)v8;
    if ( (void *)v8 != dest )
    {
      do
      {
        v14 = *v32;
        if ( (_DWORD)v14 == -1 )
          break;
        v15 = *(_QWORD *)(a1 + 448) + v14;
        while ( 1 )
        {
          v8 = v15;
          v16 = *(_BYTE *)(a1 + 161) ? sub_28DA0(a1, v15) : sub_28D10(a1, v15);
          v20 = v16;
          if ( v16 == -1 )
            break;
          v21 = **(__int64 (__fastcall ***)())a2;
          switch ( v31 )
          {
            case 1u:
            case 0xAu:
              v22 = 0;
              goto LABEL_19;
            case 2u:
              v23 = -1;
              if ( v16 >= 0 )
                v23 = v16 & 0xFFFFFFFFFLL | ((unsigned __int64)v16 >> 36 << 56);
              goto LABEL_23;
            case 5u:
              v23 = v16 & 0x3FFFFFF;
              goto LABEL_22;
            case 6u:
              v23 = -1;
              if ( v16 < 0 )
                goto LABEL_23;
              v23 = v16 & 0xFFFFFFFFFLL | ((unsigned __int64)v16 >> 36 << 56);
              goto LABEL_22;
            case 7u:
            case 9u:
              v22 = 1;
LABEL_19:
              v23 = -1;
              if ( (v16 & 0x4000000000000000LL) == 0 )
              {
                v23 = (unsigned int)v16;
                if ( v16 < 0
                  || (v23 = ((unsigned __int64)v16 >> 43 << 56)
                          | ((v16 & 0x7FFFFFFFFFFLL ^ 0x40000000000LL) - 0x40000000000LL),
                      v22) )
                {
LABEL_22:
                  v23 += *(_QWORD *)(a1 + 448);
                }
              }
LABEL_23:
              v13 = v15 & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
              if ( v21 == sub_12870 )
              {
                if ( (unsigned __int8)callui(27) )
                  goto LABEL_59;
                if ( v13 != -1 )
                  v13 &= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 16LL);
                if ( (unsigned __int8)is_loaded(v13) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 13689LL) & 8) == 0 && v20 != v23 )
                    patch_qword(v13, v23);
                  default_reftype = get_default_reftype(v13);
                  op_offset(v13, 0, default_reftype, -1, 0, 0);
                }
              }
              else
              {
                v8 = v15 & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
                LODWORD(v13) = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))v21)(
                                 a2,
                                 v8,
                                 v16,
                                 v23);
                if ( (_DWORD)v13 )
                {
                  v9 = v36;
                  goto LABEL_44;
                }
              }
              v8 = v20;
              v25 = sub_1B550(a1, v20, v31);
              v15 += v25;
              if ( !v25 )
                goto LABEL_33;
              break;
            default:
              v30 = (char *)v31;
              sub_196C0((unsigned int)"Unhandled pointer chain format %d", v31, v17, v18, (_DWORD)v21, v19);
              if ( under_debugger )
                BUG();
              interr(20152);
              goto LABEL_63;
          }
        }
LABEL_33:
        ++v32;
      }
      while ( v33 != v32 );
    }
    v9 = v36;
    LODWORD(v13) = 0;
    goto LABEL_44;
  }
  v4 = sub_300F0(a1, "__TEXT", "__chain_starts", &v36);
  v8 = v36;
  v9 = v36;
  if ( v4 && (unsigned __int64)v37 > 8 )
  {
    v38 = *(_QWORD *)v36;
    v39 = *(_DWORD *)(v36 + 8);
    v31 = v38;
    if ( (unsigned int)v38 <= 7 )
    {
      v10 = 162;
      if ( _bittest64(&v10, (unsigned int)v38) )
      {
        v11 = HIDWORD(v38);
        v12 = v35;
        LODWORD(v13) = HIDWORD(v38);
        if ( (unsigned __int64)v35 < HIDWORD(v38) )
        {
          v29 = (char *)dest;
          if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)HIDWORD(v38) )
          {
            dest = (void *)qvector_reserve(&dest, dest, HIDWORD(v38), 4);
            v12 = v35;
            v29 = (char *)dest;
          }
          memset(&v29[4 * v12], 0, 4 * (v11 - v12));
          *(_QWORD *)&v35 = v11;
          v8 = v36;
        }
        else if ( HIDWORD(v38) != (_QWORD)v35 )
        {
          *(_QWORD *)&v35 = HIDWORD(v38);
        }
        memcpy(dest, (const void *)(v8 + 8), (unsigned int)(4 * v13));
        goto LABEL_11;
      }
    }
    v8 = (unsigned int)v38;
    sub_19510((unsigned int)"Unhandled __chain_starts format  %d", v38, v38, v5, v6, v7);
LABEL_59:
    v9 = v36;
  }
  LODWORD(v13) = -1;
LABEL_44:
  if ( v9 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v9, (const char *)v8);
  }
  if ( dest )
  {
    *(_QWORD *)&v35 = 0;
    qfree(dest, (const char *)v8);
  }
  return (unsigned int)v13;
}
