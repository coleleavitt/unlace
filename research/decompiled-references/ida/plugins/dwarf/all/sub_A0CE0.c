__int64 __fastcall sub_A0CE0(_QWORD *a1, __int64 a2, char a3)
{
  _OWORD *v5; // rax
  unsigned int v6; // ebp
  __int64 (__fastcall ***v8)(__int64); // r13
  _OWORD *v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  bool v12; // zf
  __int64 (__fastcall *v13)(__int64); // rcx
  __int64 (__fastcall *v14)(__int64); // rdx
  __int64 (__fastcall **v15)(__int64); // rdx
  __int64 (__fastcall **v16)(__int64); // rsi
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(__int64); // rcx
  __int64 (__fastcall *v19)(__int64); // rdx
  __int64 (__fastcall **v20)(__int64); // rdx
  __int64 (__fastcall **v21)(__int64); // rsi
  unsigned int v22; // eax
  unsigned int v24; // [rsp+8h] [rbp-260h]
  unsigned int v25; // [rsp+8h] [rbp-260h]
  unsigned int v26; // [rsp+8h] [rbp-260h]
  unsigned int v27; // [rsp+8h] [rbp-260h]
  unsigned int v28; // [rsp+Ch] [rbp-25Ch]
  unsigned int v29; // [rsp+Ch] [rbp-25Ch]
  unsigned int v30; // [rsp+Ch] [rbp-25Ch]
  unsigned int v31; // [rsp+Ch] [rbp-25Ch]
  unsigned int v32; // [rsp+Ch] [rbp-25Ch]
  void *v33[4]; // [rsp+10h] [rbp-258h] BYREF
  __int128 v34; // [rsp+30h] [rbp-238h]
  __int128 v35; // [rsp+40h] [rbp-228h]
  __int64 v36; // [rsp+50h] [rbp-218h]
  __int128 v37; // [rsp+58h] [rbp-210h]
  __int64 v38; // [rsp+68h] [rbp-200h]
  __int128 v39; // [rsp+70h] [rbp-1F8h]
  __int64 v40; // [rsp+A8h] [rbp-1C0h]
  __int128 v41; // [rsp+B0h] [rbp-1B8h]
  __int64 v42; // [rsp+C0h] [rbp-1A8h]
  __int128 v43; // [rsp+C8h] [rbp-1A0h]
  __int64 v44; // [rsp+E4h] [rbp-184h]
  __int64 v45; // [rsp+ECh] [rbp-17Ch]
  __int64 v46; // [rsp+F4h] [rbp-174h]
  unsigned __int64 v47; // [rsp+FCh] [rbp-16Ch]
  __int64 v48; // [rsp+108h] [rbp-160h]
  void *v49[4]; // [rsp+120h] [rbp-148h] BYREF
  __int128 v50; // [rsp+140h] [rbp-128h]
  __int128 v51; // [rsp+150h] [rbp-118h]
  __int64 v52; // [rsp+160h] [rbp-108h]
  __int128 v53; // [rsp+168h] [rbp-100h]
  __int64 v54; // [rsp+178h] [rbp-F0h]
  __int128 v55; // [rsp+180h] [rbp-E8h]
  __int64 v56; // [rsp+1B8h] [rbp-B0h]
  __int128 v57; // [rsp+1C0h] [rbp-A8h]
  __int64 v58; // [rsp+1D0h] [rbp-98h]
  __int128 v59; // [rsp+1D8h] [rbp-90h]
  __int64 v60; // [rsp+1F4h] [rbp-74h]
  __int64 v61; // [rsp+1FCh] [rbp-6Ch]
  __int64 v62; // [rsp+204h] [rbp-64h]
  unsigned __int64 v63; // [rsp+20Ch] [rbp-5Ch]
  __int64 v64; // [rsp+218h] [rbp-50h]
  unsigned __int64 v65; // [rsp+228h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, a1);
  v5 = (_OWORD *)operator new(0x20u);
  *((_DWORD *)v5 + 2) = 1;
  *(_QWORD *)v5 = off_C9528;
  v33[0] = v5;
  v5[1] = 0;
  v46 = 0x80000000LL;
  v33[3] = nullptr;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v48 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0xFFFFFFFF00000000LL;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  if ( sub_98CE0(a1, (__int64 *)v33) )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, void **))a2)(a2, v33);
    if ( !v6 )
    {
      if ( !a3 || (++*(_DWORD *)(a2 + 8), v22 = sub_A0CE0(v33, a2, 1), --*(_DWORD *)(a2 + 8), (v6 = v22) == 0) )
      {
        v8 = (__int64 (__fastcall ***)(__int64))v33[0];
        if ( v33[0] )
          ++*((_DWORD *)v33[0] + 2);
        while ( 1 )
        {
          v9 = (_OWORD *)operator new(0x20u);
          *(_QWORD *)v9 = off_C9528;
          v10 = *(_QWORD **)(a2 + 16);
          *((_DWORD *)v9 + 2) = 1;
          v49[0] = v9;
          v9[1] = 0;
          v62 = 0x80000000LL;
          v49[3] = nullptr;
          v52 = 0;
          v54 = 0;
          v56 = 0;
          v58 = 0;
          v64 = 0;
          v60 = 0;
          v61 = 0;
          v63 = 0xFFFFFFFF00000000LL;
          v50 = 0;
          v51 = 0;
          v53 = 0;
          v55 = 0;
          v57 = 0;
          v59 = 0;
          if ( !(unsigned __int8)sub_9FB10((__int64)v8, (__int64 *)v49, v10) )
            break;
          v11 = (**(__int64 (__fastcall ***)(__int64, void **))a2)(a2, v49);
          if ( !v11 && a3 )
          {
            ++*(_DWORD *)(a2 + 8);
            v11 = sub_A0CE0(v49, a2, 1);
            --*(_DWORD *)(a2 + 8);
          }
          if ( v8 )
          {
            v12 = (*((_DWORD *)v8 + 2))-- == 1;
            if ( v12 )
            {
              v13 = **v8;
              if ( v13 == sub_12F10 )
              {
                v14 = (*v8)[2];
                if ( (char *)v14 == (char *)sub_80130 )
                {
                  v15 = v8[2];
                  *v8 = (__int64 (__fastcall **)(__int64))off_C9528;
                  if ( v15 )
                  {
                    v16 = v8[3];
                    if ( v16 )
                    {
                      v28 = v11;
                      (*((void (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall **)(__int64), __int64))v15[11]
                       + 60))(
                        v15[20],
                        v16,
                        8);
                      v11 = v28;
                    }
                  }
                  v29 = v11;
                  operator delete(v8, 0x20u);
                  v11 = v29;
                }
                else
                {
                  v32 = v11;
                  v14((__int64)v8);
                  v11 = v32;
                }
              }
              else
              {
                v31 = v11;
                v13((__int64)v8);
                v11 = v31;
              }
            }
          }
          v8 = (__int64 (__fastcall ***)(__int64))v49[0];
          if ( v49[0] )
            ++*((_DWORD *)v49[0] + 2);
          v30 = v11;
          sub_1B750((__int64)v49);
          v17 = v30;
          if ( v30 )
            goto LABEL_23;
        }
        sub_1B750((__int64)v49);
        v17 = 0;
LABEL_23:
        if ( v8 )
        {
          v12 = (*((_DWORD *)v8 + 2))-- == 1;
          if ( v12 )
          {
            v18 = **v8;
            if ( v18 != sub_12F10 )
            {
              v26 = v17;
              v18((__int64)v8);
              v6 = v26;
              goto LABEL_3;
            }
            v19 = (*v8)[2];
            if ( (char *)v19 != (char *)sub_80130 )
            {
              v27 = v17;
              v19((__int64)v8);
              v6 = v27;
              goto LABEL_3;
            }
            v20 = v8[2];
            *v8 = (__int64 (__fastcall **)(__int64))off_C9528;
            if ( v20 )
            {
              v21 = v8[3];
              if ( v21 )
              {
                v24 = v17;
                (*((void (__fastcall **)(__int64 (__fastcall *)(__int64), __int64 (__fastcall **)(__int64), __int64))v20[11]
                 + 60))(
                  v20[20],
                  v21,
                  8);
                v17 = v24;
              }
            }
            v25 = v17;
            operator delete(v8, 0x20u);
            v17 = v25;
          }
        }
        v6 = v17;
      }
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_3:
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, a1);
  sub_1B750((__int64)v33);
  return v6;
}

