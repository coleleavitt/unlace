__int64 __fastcall sub_25010(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, __int64 a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // r15d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rdi
  __int64 v19; // r8
  int v20; // r12d
  __int64 v21; // r9
  __int64 v22; // rax
  _DWORD *v23; // r13
  _DWORD *v24; // rbp
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+10h] [rbp-158h]
  unsigned int v30; // [rsp+14h] [rbp-154h]
  unsigned int v32; // [rsp+34h] [rbp-134h] BYREF
  __int64 v33; // [rsp+38h] [rbp-130h] BYREF
  __int64 v34; // [rsp+40h] [rbp-128h] BYREF
  int v35; // [rsp+48h] [rbp-120h]
  __int64 v36; // [rsp+50h] [rbp-118h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-110h]
  int v38; // [rsp+60h] [rbp-108h]
  char v39; // [rsp+64h] [rbp-104h]
  __int64 v40; // [rsp+70h] [rbp-F8h] BYREF
  __int64 *v41; // [rsp+78h] [rbp-F0h]
  int v42; // [rsp+80h] [rbp-E8h]
  char v43; // [rsp+84h] [rbp-E4h]
  int v44; // [rsp+88h] [rbp-E0h]
  int v45; // [rsp+8Ch] [rbp-DCh]
  int v46; // [rsp+90h] [rbp-D8h]
  int v47; // [rsp+94h] [rbp-D4h]
  _DWORD v48[12]; // [rsp+A0h] [rbp-C8h] BYREF
  _DWORD v49[12]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v50[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+128h] [rbp-40h]

  v29 = a5;
  v51 = __readfsqword(0x28u);
  v9 = (__int64)a7;
  if ( a3 )
    *a3 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v10 + 672) )
    return 1;
  v34 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v35 = 15;
  v44 = a2 & 0xFFFFFF;
  v13 = *(_DWORD *)(v10 + 676);
  v41 = &v34;
  v40 = v10;
  v42 = 0;
  v43 = 2;
  v45 = 45;
  v46 = v13;
  v47 = 0;
  v36 = v10;
  v37 = &v40;
  v38 = 257;
  v39 = 0;
  while ( (unsigned __int8)sub_24C80((__int64)&v40, (int *)&v33, (__int64)v50, v9, a5, (__int64)a6) )
  {
    if ( v12 )
      sub_DA00((__int64)"More than 1 result", (__int64)&v33, v14, v15, v16, v17, (char)a4);
    v12 = v33;
    sub_24D50((__int64)&v36, (unsigned int)v33, v48, v15, v16, v17);
  }
  if ( !v12 )
    return 1;
  if ( a7 )
    *a7 = v48[1];
  if ( a3 )
    *a3 = v48[0];
  v18 = *(_DWORD **)(a1 + 8);
  v33 = 0;
  sub_24510(v18, a2, 0, (int *)&v33);
  v20 = v33;
  v21 = (__int64)a6;
  v22 = (unsigned int)(HIDWORD(v33) - v33);
  if ( (unsigned int)v22 > v29 )
    v22 = v29;
  if ( a6 )
    *a6 = v22;
  if ( (_DWORD)v22 )
  {
    v23 = &a4[2 * v22];
    v24 = a4;
    do
    {
      while ( 1 )
      {
        *v24 = v20;
        v25 = *(_QWORD *)(a1 + 8);
        v41 = &v34;
        v35 = 16;
        v34 = v25;
        v26 = *(_DWORD *)(v25 + 716);
        v40 = v25;
        v46 = v26;
        v42 = 0;
        v43 = 1;
        v44 = v20 & 0xFFFFFF;
        v45 = 45;
        v47 = 0;
        v36 = v25;
        v37 = &v40;
        v38 = 257;
        v39 = 0;
        if ( (unsigned __int8)sub_24C80((__int64)&v40, (int *)&v32, (__int64)v50, v20 & 0xFFFFFF, v19, v21) )
        {
          v30 = v32;
          sub_24D50((__int64)&v36, v32, v49, v27, v19, v21);
          if ( v30 )
            break;
        }
        v24 += 2;
        if ( v24 == v23 )
          return 0;
      }
      v24 += 2;
      *(v24 - 1) = v49[0];
    }
    while ( v24 != v23 );
  }
  return 0;
}
