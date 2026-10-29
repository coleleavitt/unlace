__int64 __fastcall sub_30290(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // r8
  char v15; // dl
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+4h] [rbp-9Ch]
  unsigned int *v21; // [rsp+8h] [rbp-98h]
  unsigned int *v22; // [rsp+10h] [rbp-90h]
  unsigned int *dest; // [rsp+18h] [rbp-88h]
  unsigned __int64 v24; // [rsp+20h] [rbp-80h]
  __int64 *v25; // [rsp+38h] [rbp-68h] BYREF
  __int128 v26; // [rsp+40h] [rbp-60h]
  __int64 v27; // [rsp+54h] [rbp-4Ch]
  int v28; // [rsp+5Ch] [rbp-44h]
  unsigned __int64 v29; // [rsp+60h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v24 = 0;
  v26 = 0;
  dest = nullptr;
  v25 = nullptr;
  if ( (unsigned __int8)sub_300F0(a1, "__TEXT", "__thread_starts", (__int64 *)&v25) && (unsigned __int64)v26 > 7 )
  {
    v19 = (__int64)v25;
    v13 = v26 - 4;
    v11 = (unsigned __int64)(v26 - 4) >> 2;
    LOBYTE(v9) = *(_BYTE *)v25 & 1;
    if ( v11 )
    {
LABEL_56:
      dest = (unsigned int *)qvector_reserve();
      memset(&dest[v24], 0, 4 * (v11 - v24));
      v24 = v11;
      v19 = (__int64)v25;
    }
    memcpy(dest, (const void *)(v19 + 4), v13 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = (_BYTE)v9 == 0 ? 10 : 1;
LABEL_10:
    v21 = dest;
    v22 = &dest[v24];
    if ( v22 != dest )
    {
      do
      {
        v10 = *v21;
        if ( (_DWORD)v10 == -1 )
          break;
        v11 = *(_QWORD *)(a1 + 448) + v10;
        while ( 1 )
        {
          v12 = *(_BYTE *)(a1 + 161) ? sub_28DA0(a1, v11) : sub_28D10(a1, v11);
          v13 = v12;
          if ( v12 == -1 )
            break;
          v14 = **(__int64 (__fastcall ***)(__int64, __int64, __int64, __int64))a2;
          switch ( v20 )
          {
            case 1u:
            case 0xAu:
              v15 = 0;
              goto LABEL_18;
            case 2u:
              v16 = -1;
              if ( v12 >= 0 )
                v16 = v12 & 0xFFFFFFFFFLL | ((unsigned __int64)v12 >> 36 << 56);
              goto LABEL_22;
            case 5u:
              v16 = v12 & 0x3FFFFFF;
              goto LABEL_21;
            case 6u:
              v16 = -1;
              if ( v12 < 0 )
                goto LABEL_22;
              v16 = v12 & 0xFFFFFFFFFLL | ((unsigned __int64)v12 >> 36 << 56);
              goto LABEL_21;
            case 7u:
            case 9u:
              v15 = 1;
LABEL_18:
              v16 = -1;
              if ( (v12 & 0x4000000000000000LL) == 0 )
              {
                v16 = (unsigned int)v12;
                if ( v12 < 0
                  || (v16 = ((unsigned __int64)v12 >> 43 << 56)
                          | ((v12 & 0x7FFFFFFFFFFLL ^ 0x40000000000LL) - 0x40000000000LL),
                      v15) )
                {
LABEL_21:
                  v16 += *(_QWORD *)(a1 + 448);
                }
              }
LABEL_22:
              v9 = v11 & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
              if ( v14 == sub_12870 )
              {
                if ( (unsigned __int8)callui(27, v11, &callui) )
                  goto LABEL_52;
                if ( v9 != -1 )
                  v9 &= *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 16LL);
                if ( (unsigned __int8)is_loaded() )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 13689LL) & 8) == 0 && v13 != v16 )
                    patch_qword();
                  get_default_reftype();
                  op_offset();
                }
              }
              else
              {
                LODWORD(v9) = v14(a2, v11 & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v12, v16);
                if ( (_DWORD)v9 )
                {
                  v6 = (__int64)v25;
                  goto LABEL_43;
                }
              }
              v17 = sub_1B550(a1, v13, v20);
              v11 += v17;
              if ( !v17 )
                goto LABEL_32;
              break;
            default:
              sub_196C0((__int64)"Unhandled pointer chain format %d");
              if ( under_debugger )
                BUG();
              interr();
              goto LABEL_56;
          }
        }
LABEL_32:
        ++v21;
      }
      while ( v22 != v21 );
    }
    v6 = (__int64)v25;
    LODWORD(v9) = 0;
    goto LABEL_43;
  }
  v4 = sub_300F0(a1, "__TEXT", "__chain_starts", (__int64 *)&v25);
  v5 = (__int64)v25;
  v6 = (__int64)v25;
  if ( v4 && (unsigned __int64)v26 > 8 )
  {
    v27 = *v25;
    v28 = *((_DWORD *)v25 + 2);
    v20 = v27;
    if ( (unsigned int)v27 <= 7 )
    {
      v7 = 162;
      if ( _bittest64(&v7, (unsigned int)v27) )
      {
        v8 = HIDWORD(v27);
        LODWORD(v9) = HIDWORD(v27);
        if ( HIDWORD(v27) )
        {
          dest = (unsigned int *)qvector_reserve();
          memset(dest, 0, 4 * v8);
          v24 = v8;
          v5 = (__int64)v25;
        }
        memcpy(dest, (const void *)(v5 + 8), (unsigned int)(4 * v9));
        goto LABEL_10;
      }
    }
    sub_19510((__int64)"Unhandled __chain_starts format  %d");
LABEL_52:
    v6 = (__int64)v25;
  }
  LODWORD(v9) = -1;
LABEL_43:
  if ( v6 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( dest )
    qfree();
  return (unsigned int)v9;
}

