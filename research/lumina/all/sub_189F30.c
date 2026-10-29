void __fastcall sub_189F30(__int64 a1, __int64 a2)
{
  __int64 v3; // xmm0_8
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // r13
  size_t v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbp
  unsigned __int64 v18; // r9
  size_t v19; // r10
  char v20; // bp
  _QWORD *v21; // r12
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  const void *v33; // r11
  void *v34; // rdi
  __int64 v35; // rax
  void *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+0h] [rbp-58h]
  unsigned __int64 v39; // [rsp+8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+8h] [rbp-50h]
  size_t v41; // [rsp+10h] [rbp-48h]
  const void *v42; // [rsp+18h] [rbp-40h]

  sub_189C20(a1);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v4 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = v4;
      break;
    case 2:
      v5 = operator new(0x18u);
      v6 = (_QWORD *)v5;
      if ( *(_DWORD *)a2 != 2 )
      {
        if ( !unk_2439A0 )
          sub_198E10(1623);
        BUG();
      }
      v7 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)v5 = 0;
      *(_OWORD *)(v5 + 8) = 0;
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
      {
        v36 = (void *)sub_198760(*(_QWORD *)(v7 + 8));
        *v6 = v36;
        v6[2] = v8;
        memcpy(v36, *(const void **)v7, v8);
        v6[1] = v8;
      }
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v6;
      break;
    case 3:
      v9 = *(_QWORD **)(a2 + 8);
      v10 = sub_198760(24);
      *(_QWORD *)v10 = 0;
      v11 = (__int64 *)v10;
      *(_OWORD *)(v10 + 8) = 0;
      v37 = v9[1];
      if ( v37 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = *v9 + 40 * v15;
          if ( v13 < v14 + 1 )
          {
            v31 = sub_1987B0(v11, v12, v14 + 1, 40);
            *v11 = v31;
            v12 = v31;
            v14 = v11[1];
          }
          v17 = v12 + 40 * v14;
          *(_QWORD *)v17 = 0;
          *(_DWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 32) = 0;
          *(_OWORD *)(v17 + 8) = 0;
          ++v11[1];
          if ( v16 != v17 )
          {
            v18 = *(_QWORD *)(v16 + 8);
            if ( v18 && (v19 = v18 - 1, v18 != 1) )
            {
              v33 = *(const void **)v16;
              v34 = *(void **)v17;
              if ( *(_QWORD *)(v17 + 16) < v18 )
              {
                v42 = *(const void **)v16;
                v41 = v18 - 1;
                v40 = *(_QWORD *)(v16 + 8);
                v35 = sub_1987B0(v17, *(_QWORD *)v17, v40, 1);
                v33 = v42;
                v19 = v41;
                *(_QWORD *)v17 = v35;
                v18 = v40;
                v34 = (void *)v35;
              }
              *(_QWORD *)(v17 + 8) = v18;
              v39 = v18;
              memmove(v34, v33, v19);
              *(_BYTE *)(*(_QWORD *)v17 + v39 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v17 + 8) = 0;
            }
          }
          ++v15;
          sub_189F30(v17 + 24, v16 + 24);
          if ( v15 == v37 )
            break;
          v14 = v11[1];
          v13 = v11[2];
          v12 = *v11;
        }
      }
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 3;
      *(_QWORD *)(a1 + 8) = v11;
      break;
    case 4:
      v21 = *(_QWORD **)(a2 + 8);
      v22 = operator new(0x18u);
      *(_QWORD *)v22 = 0;
      v23 = (__int64 *)v22;
      *(_OWORD *)(v22 + 8) = 0;
      v24 = v21[1];
      if ( v24 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        while ( 1 )
        {
          v29 = *v21 + 16 * v28;
          if ( v26 < v27 + 1 )
          {
            v32 = sub_1987B0(v23, v25, v27 + 1, 16);
            *v23 = v32;
            v25 = v32;
            v27 = v23[1];
          }
          ++v28;
          v30 = (_QWORD *)(v25 + 16 * v27);
          *v30 = 0;
          v30[1] = 0;
          ++v23[1];
          sub_189F30(v30, v29);
          if ( v28 == v24 )
            break;
          v27 = v23[1];
          v26 = v23[2];
          v25 = *v23;
        }
      }
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v23;
      break;
    case 5:
      v20 = *(_BYTE *)(a2 + 8);
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 5;
      *(_BYTE *)(a1 + 8) = v20;
      break;
    case 6:
      if ( *(_DWORD *)a1 )
        sub_189C20(a1);
      *(_DWORD *)a1 = 6;
      break;
    case 7:
      v3 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)a1 )
      {
        v38 = *(_QWORD *)(a2 + 8);
        sub_189C20(a1);
        v3 = v38;
      }
      *(_DWORD *)a1 = 7;
      *(_QWORD *)(a1 + 8) = v3;
      break;
    default:
      return;
  }
}
