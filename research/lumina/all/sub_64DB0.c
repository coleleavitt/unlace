__int64 __fastcall sub_64DB0(_QWORD *a1, void **a2, __int64 a3, int a4)
{
  char *v4; // rbx
  unsigned int v5; // r14d
  void *v9; // r15
  void *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rdx
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // [rsp+10h] [rbp-168h]
  unsigned __int64 v20; // [rsp+10h] [rbp-168h]
  __int64 v21; // [rsp+18h] [rbp-160h]
  unsigned int v22; // [rsp+24h] [rbp-154h]
  void *v23; // [rsp+28h] [rbp-150h]
  __int64 v24; // [rsp+30h] [rbp-148h]
  __int64 v25; // [rsp+30h] [rbp-148h]
  void *v26; // [rsp+30h] [rbp-148h]
  void *v27; // [rsp+38h] [rbp-140h]
  void *v28; // [rsp+38h] [rbp-140h]
  void *v29[2]; // [rsp+48h] [rbp-130h] BYREF
  __int128 v30; // [rsp+58h] [rbp-120h]
  __int64 v31; // [rsp+68h] [rbp-110h]
  __int128 v32; // [rsp+70h] [rbp-108h]
  __int64 v33; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+88h] [rbp-F0h]
  __int64 v35; // [rsp+98h] [rbp-E0h]
  __int128 v36; // [rsp+A0h] [rbp-D8h]
  __int64 v37; // [rsp+B0h] [rbp-C8h]
  __int128 v38; // [rsp+B8h] [rbp-C0h]
  __int64 v39; // [rsp+C8h] [rbp-B0h]
  __int64 v40; // [rsp+D0h] [rbp-A8h]
  void *v41; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v42; // [rsp+E8h] [rbp-90h]
  __int64 v43; // [rsp+F8h] [rbp-80h]
  __int128 v44; // [rsp+100h] [rbp-78h]
  __int64 v45; // [rsp+110h] [rbp-68h]
  __int128 v46; // [rsp+118h] [rbp-60h]
  __int64 v47; // [rsp+128h] [rbp-50h]
  __int64 v48; // [rsp+130h] [rbp-48h]
  unsigned __int64 v49; // [rsp+138h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v29[0] = *a2;
  v4 = (char *)v29[0] + a3;
  if ( !__CFADD__(a3, v29[0]) )
  {
    v5 = sub_63280((__int64)a1, v29, a3, a4);
    if ( (_BYTE)v5 )
    {
      v9 = v29[0];
      v41 = v29[0];
      v22 = sub_196ED0(&v41, v4);
      v10 = v41;
      v29[0] = v41;
      if ( v9 < v41 )
      {
        v11 = a1[20];
        if ( v22 != v11 )
        {
          v29[1] = nullptr;
          v31 = 0;
          v33 = 0;
          v35 = 0;
          v37 = 0;
          v39 = 0;
          v40 = 0;
          v30 = 0;
          v32 = 0;
          v34 = 0;
          v36 = 0;
          v38 = 0;
          if ( v22 < v11 )
          {
            v20 = v22;
            v21 = 88LL * v22;
            do
            {
              v15 = a1[19] + v21;
              v16 = *(void **)(v15 + 48);
              if ( v16 )
              {
                *(_QWORD *)(v15 + 56) = 0;
                v27 = v10;
                v24 = v15;
                j__free(v16);
                v10 = v27;
                v15 = v24;
              }
              v17 = *(void **)(v15 + 24);
              if ( v17 )
              {
                *(_QWORD *)(v15 + 32) = 0;
                v28 = v10;
                v25 = v15;
                j__free(v17);
                v10 = v28;
                v15 = v25;
              }
              v18 = *(void **)v15;
              if ( *(_QWORD *)v15 )
              {
                *(_QWORD *)(v15 + 8) = 0;
                v26 = v10;
                j__free(v18);
                v10 = v26;
              }
              ++v20;
              v21 += 88;
            }
            while ( v20 < v11 );
            a1[20] = v22;
          }
          else
          {
            v12 = a1[19];
            v13 = a1 + 19;
            if ( (unsigned __int64)&v33 < v12 || (unsigned __int64)&v33 >= v12 + 88LL * a1[21] )
            {
              v19 = v41;
              sub_64BE0(v13, v22, (__int64)&v33);
              v10 = v19;
            }
            else
            {
              v23 = v41;
              v41 = nullptr;
              v43 = 0;
              v45 = 0;
              v47 = 0;
              v48 = 0;
              v42 = 0;
              v44 = 0;
              v46 = 0;
              sub_64BE0(v13, v22, (__int64)&v41);
              v10 = v23;
            }
          }
        }
        if ( !v22 )
        {
LABEL_15:
          *a2 = v10;
          return v5;
        }
        v14 = 0;
        while ( (unsigned __int8)sub_64280((__int64 *)(v14 + a1[19]), v29, v4 - (_BYTE *)v10) )
        {
          v10 = v29[0];
          v14 += 88;
          if ( 88LL * v22 == v14 )
            goto LABEL_15;
        }
      }
    }
  }
  return 0;
}
