void __fastcall sub_FDAD0(_DWORD *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char *v14; // rbx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _BYTE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v24; // r14
  int v25; // r15d
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // r9
  int v39; // r12d
  __int64 v40; // rbp
  int v41; // eax
  _BYTE *v42; // r15
  int v43; // r14d
  __int64 v44; // rax
  char *v45; // rdi
  char v46; // r13
  __int64 v47; // r9
  int v48; // r13d
  __int64 v49; // rdi
  int v50; // r12d
  const char *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  int v58; // [rsp+0h] [rbp-88h]
  _QWORD *v59; // [rsp+0h] [rbp-88h]
  __int64 v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+14h] [rbp-74h]
  __int64 v63; // [rsp+18h] [rbp-70h]
  size_t n; // [rsp+20h] [rbp-68h]
  int v65; // [rsp+28h] [rbp-60h]
  int v66; // [rsp+2Ch] [rbp-5Ch]
  void *src; // [rsp+30h] [rbp-58h]
  int v68; // [rsp+38h] [rbp-50h]
  int v69; // [rsp+3Ch] [rbp-4Ch]
  __int64 v70; // [rsp+40h] [rbp-48h]

  v8 = (__int64)a1;
  v61 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v9 = sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  if ( v9 )
  {
    v14 = (char *)v9;
    v62 = sub_D9CE0(*a4, 1u, a2, v10, v11, v12, v13);
    v19 = (_BYTE *)sub_D9DB0(a4[1], 1u, a2, v15, v16, v17, v18);
    v24 = v19;
    if ( v19 )
    {
      if ( !*v19 )
      {
        sub_FD650((__int64)a1, (const __m128i *)*a4, v20, v21, v22, v23);
        return;
      }
      v25 = sub_D9CE0(a4[1], 1u, a2, v20, v21, v22, v23);
      v68 = v25;
      src = (void *)sub_D9DB0(a4[2], 1u, a2, v26, v27, v28, v29);
      if ( src )
      {
        v65 = sub_D9CE0(a4[2], 1u, a2, v30, v31, v32, v33);
        v63 = v62 + 1;
        v37 = sub_F5B20((__int64)a1, v63, v34, v63, v35, v36);
        v38 = (_QWORD *)v37;
        if ( v37 )
        {
          v58 = v62 - v25;
          if ( v62 - v25 < 0 )
          {
            v50 = v62;
            v49 = 0;
LABEL_20:
            v59 = v38;
            memcpy((char *)v38 + v49, v14, v62);
            *((_BYTE *)v59 + v50) = 0;
            sub_F48B0(v8, v59, v50, 1u, (__int64 (__fastcall *)(__int64))sub_C91C0, (__int64)v59);
            return;
          }
          n = v25;
          v66 = 0;
          v39 = 0;
          v40 = v37;
          v41 = v65 - v25;
          v69 = v25 - 1;
          v42 = v24;
          v43 = 0;
          v70 = v41;
          while ( 1 )
          {
            v45 = &v14[v39];
            v46 = *v45;
            if ( *v45 == *v42 && !memcmp(v45, v42, n) )
            {
              if ( v68 >= v65 )
              {
                v48 = v66;
              }
              else
              {
                v63 += v70;
                if ( v63 - 1 > *(int *)(v61 + 136) )
                {
                  v60 = v40;
                  v51 = "string or blob too big";
                  v57 = *(_QWORD *)a1;
                  a1[9] = 18;
                  sub_F11D0(v57, "string or blob too big", -1, 1, nullptr, v47);
                  goto LABEL_24;
                }
                v48 = v66 + 1;
                if ( ((v66 + 1) & v66) == 0 )
                {
                  v51 = (const char *)((int)v63 + v63 + ~(__int64)v62);
                  v52 = sub_D2640(v40, (__int64)v51);
                  if ( !v52 )
                  {
                    v60 = v40;
                    sub_E1560((__int64)a1, (__int64)v51, v53, v54, v55, v56);
LABEL_24:
                    sub_C91C0(v60, (__int64)v51);
                    return;
                  }
                  v40 = v52;
                }
              }
              memcpy((void *)(v40 + v43), src, v65);
              v43 += v65;
              v39 += v69;
              v66 = v48;
            }
            else
            {
              v44 = v43++;
              *(_BYTE *)(v40 + v44) = v46;
            }
            if ( v58 < ++v39 )
            {
              v62 -= v39;
              v38 = (_QWORD *)v40;
              v14 += v39;
              v49 = v43;
              v8 = (__int64)a1;
              v50 = v43 + v62;
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
}
