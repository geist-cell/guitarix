// generated from file '../src/faust/fuzzface.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


#include "clipping.h"

namespace fuzzface {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	FAUSTFLOAT 	fslider1;
	double 	fRec1[2];
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fRec2[6];
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;


	int samplingFreq;
	gx_resample::FixedRateResampler smpCl;

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "fuzzface";
	name = N_("Fuzz Face");
	groups = 0;
	description = N_("J Hendrix Fuzz Face simulation"); // description (tooltip)
	category = N_("Fuzz");       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<6; i++) fRec2[i] = 0;


}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (3.73292075290073e-29 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.05633134620746e-20 + fConst1))) - 3.11506369039915e-14)) - 2.30719916990074e-11)) - 1.07493164710329e-09);
	fConst3 = (1.07449105454163e-09 + (fConst0 * (2.29636966370042e-11 + (fConst0 * (2.91602352831988e-14 + (fConst0 * (1.01643277726662e-20 + fConst1)))))));
	fConst4 = (3.98985774247549e-22 * fConst0);
	fConst5 = (5.31230624730483e-11 + (fConst0 * (1.83615604104971e-13 + (fConst0 * (1.99042653510896e-15 + fConst4)))));
	fConst6 = (4.76991513499346e-20 * fConst0);
	fConst7 = (5.00346713698171e-13 + fConst6);
	fConst8 = (0 - fConst7);
	fConst9 = (fConst6 - 5.38351707988916e-15);
	fConst10 = (5.38351707988916e-15 - fConst6);
	fConst11 = (5.05730339185222e-13 * fConst0);
	fConst12 = (fConst11 - 1.16162215422261e-12);
	fConst13 = (1.07493164710329e-09 + (fConst0 * ((fConst0 * (3.11506369039915e-14 + (fConst0 * (fConst1 - 1.05633134620746e-20)))) - 2.30719916990074e-11)));
	fConst14 = ((fConst0 * (2.29636966370042e-11 + (fConst0 * ((fConst0 * (1.01643277726662e-20 - fConst1)) - 2.91602352831988e-14)))) - 1.07449105454163e-09);
	fConst15 = ((fConst0 * (1.83615604104971e-13 + (fConst0 * (fConst4 - 1.99042653510896e-15)))) - 5.31230624730483e-11);
	fConst16 = (1.86646037645036e-28 * fConst0);
	fConst17 = (3.22479494130986e-09 + (fConst0 * ((fConst0 * ((fConst0 * (3.16899403862238e-20 - fConst16)) - 3.11506369039915e-14)) - 2.30719916990074e-11)));
	fConst18 = ((fConst0 * (2.29636966370042e-11 + (fConst0 * (2.91602352831988e-14 + (fConst0 * (fConst16 - 3.04929833179984e-20)))))) - 3.22347316362488e-09);
	fConst19 = (1.19695732274265e-21 * fConst0);
	fConst20 = ((fConst0 * (1.83615604104971e-13 + (fConst0 * (1.99042653510896e-15 - fConst19)))) - 1.59369187419145e-10);
	fConst21 = (3.73292075290073e-28 * fConst0);
	fConst22 = (2.14986329420657e-09 + (fConst0 * (4.61439833980148e-11 + (fConst0 * ((fConst0 * (fConst21 - 2.11266269241492e-20)) - 6.2301273807983e-14)))));
	fConst23 = ((fConst0 * ((fConst0 * (5.83204705663976e-14 + (fConst0 * (2.03286555453323e-20 - fConst21)))) - 4.59273932740084e-11)) - 2.14898210908325e-09);
	fConst24 = (7.97971548495099e-22 * fConst0);
	fConst25 = ((fConst0 * ((fConst0 * (3.98085307021793e-15 + fConst24)) - 3.67231208209942e-13)) - 1.06246124946097e-10);
	fConst26 = ((fConst0 * (4.61439833980148e-11 + (fConst0 * (6.2301273807983e-14 + (fConst0 * (0 - (2.11266269241492e-20 + fConst21))))))) - 2.14986329420657e-09);
	fConst27 = (2.14898210908325e-09 + (fConst0 * ((fConst0 * ((fConst0 * (2.03286555453323e-20 + fConst21)) - 5.83204705663976e-14)) - 4.59273932740084e-11)));
	fConst28 = (1.06246124946097e-10 + (fConst0 * ((fConst0 * (fConst24 - 3.98085307021793e-15)) - 3.67231208209942e-13)));
	fConst29 = ((fConst0 * ((fConst0 * (3.11506369039915e-14 + (fConst0 * (3.16899403862238e-20 + fConst16)))) - 2.30719916990074e-11)) - 3.22479494130986e-09);
	fConst30 = (3.22347316362488e-09 + (fConst0 * (2.29636966370042e-11 + (fConst0 * ((fConst0 * (0 - (3.04929833179984e-20 + fConst16))) - 2.91602352831988e-14)))));
	fConst31 = (1.59369187419145e-10 + (fConst0 * (1.83615604104971e-13 + (fConst0 * (0 - (1.99042653510896e-15 + fConst19))))));
	fConst32 = (1.43097454049804e-19 * fConst0);
	fConst33 = (5.00346713698171e-13 + fConst32);
	fConst34 = (5.38351707988916e-15 - fConst32);
	fConst35 = (fConst32 - 5.38351707988916e-15);
	fConst36 = (0 - (1.16162215422261e-12 + fConst11));
	fConst37 = (9.53983026998693e-20 * fConst0);
	fConst38 = (1.07670341597783e-14 + fConst37);
	fConst39 = (1.00069342739634e-12 - fConst37);
	fConst40 = (fConst37 - 1.00069342739634e-12);
	fConst41 = (1.01146067837044e-12 * fConst0);
	fConst42 = (2.32324430844522e-12 - fConst41);
	fConst43 = (1.00069342739634e-12 + fConst37);
	fConst44 = (0 - fConst43);
	fConst45 = (fConst37 - 1.07670341597783e-14);
	fConst46 = (1.07670341597783e-14 - fConst37);
	fConst47 = (2.32324430844522e-12 + fConst41);
	fConst48 = (fConst32 - 5.00346713698171e-13);
	fConst49 = (5.38351707988916e-15 + fConst32);
	fConst50 = (0 - fConst49);
	fConst51 = (5.00346713698171e-13 - fConst32);
	fConst52 = (5.38351707988916e-15 + fConst6);
	fConst53 = (5.00346713698171e-13 - fConst6);
	fConst54 = (fConst6 - 5.00346713698171e-13);
	fConst55 = faustpower<2>(fConst0);

	samplingFreq = 96000;
	smpCl.setup(fSamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;

	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlow0 = (0.007000000000000006 * (1 - double(fslider0)));
	double 	fSlow1 = (0.007000000000000006 * (1 - double(fslider1)));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (2.44402781742033e-09 + (fConst0 * (fConst5 + (fRec0[0] * (fConst3 + (fConst2 * fRec0[0]))))));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp1 = (fConst12 * fRec1[0]);
		fRec2[0] = ((double)input0[i] - ((((((fRec2[1] * (1.22201390871017e-08 + (fConst0 * (fConst31 + (fRec0[0] * (fConst30 + (fConst29 * fRec0[0]))))))) + (fRec2[2] * (2.44402781742033e-08 + (fConst0 * (fConst28 + (fRec0[0] * (fConst27 + (fConst26 * fRec0[0])))))))) + (fRec2[3] * (2.44402781742033e-08 + (fConst0 * (fConst25 + (fRec0[0] * (fConst23 + (fConst22 * fRec0[0])))))))) + (fRec2[4] * (1.22201390871017e-08 + (fConst0 * (fConst20 + (fRec0[0] * (fConst18 + (fConst17 * fRec0[0])))))))) + (fRec2[5] * (2.44402781742033e-09 + (fConst0 * (fConst15 + (fRec0[0] * (fConst14 + (fConst13 * fRec0[0])))))))) / fTemp0));
		double fTemp2 = (fConst36 * fRec1[0]);
		output0[i] = (FAUSTFLOAT)(fConst55 * (((((((fRec2[0] * (1.16162215422261e-12 + (fTemp2 + (fConst0 * (5.05730339185222e-13 + (fRec0[0] * (fConst54 + ((fConst53 * fRec1[0]) + (fRec0[0] * ((fConst52 * fRec1[0]) - fConst52)))))))))) + (fRec2[1] * (1.16162215422261e-12 + (fTemp1 + (fConst0 * ((fRec0[0] * (fConst51 + ((fRec0[0] * (fConst49 + (fConst50 * fRec1[0]))) + (fConst48 * fRec1[0])))) - 5.05730339185222e-13)))))) + (fRec2[2] * (((fConst47 * fRec1[0]) + (fConst0 * ((fRec0[0] * (fConst43 + ((fRec0[0] * (fConst46 + (fConst45 * fRec1[0]))) + (fConst44 * fRec1[0])))) - 1.01146067837044e-12))) - 2.32324430844522e-12))) + (fRec2[3] * (((fConst42 * fRec1[0]) + (fConst0 * (1.01146067837044e-12 + (fRec0[0] * (fConst40 + ((fConst39 * fRec1[0]) + (fRec0[0] * ((fConst38 * fRec1[0]) - fConst38)))))))) - 2.32324430844522e-12))) + (fRec2[4] * (1.16162215422261e-12 + (fTemp2 + (fConst0 * (5.05730339185222e-13 + (fRec0[0] * (((fRec0[0] * (fConst35 + (fConst34 * fRec1[0]))) + (fConst33 * fRec1[0])) - fConst33)))))))) + (fRec2[5] * (1.16162215422261e-12 + (fTemp1 + (fConst0 * ((fRec0[0] * (fConst7 + ((fRec0[0] * (fConst10 + (fConst9 * fRec1[0]))) + (fConst8 * fRec1[0])))) - 5.05730339185222e-13)))))) / fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}

	FAUSTFLOAT bufCl[smpCl.max_out_count(count)];
	int ReCount = smpCl.up(count, output0, bufCl);
	for (int i=0; i<ReCount; i++) {
		bufCl[i] = (FAUSTFLOAT)asymclip4((double)bufCl[i]);
	}
	smpCl.down(bufCl, output0);

}
		
void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("fuzzface.Fuzz",N_("Fuzz"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("fuzzface.Level",N_("Level"),"S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<interface>\n\
  <requires lib=\"gtk+\" version=\"2.20\"/>\n\
  <!-- interface-requires gxwidgets 0.0 -->\n\
  <!-- interface-naming-policy project-wide -->\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <object class=\"GtkVBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkHBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">fuzzface.Fuzz</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">fuzzface.Level</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">fuzzface.Level</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"xalign\">0</property>\n\
                <property name=\"label\" translatable=\"yes\">Level</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("fuzzface" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Fuzz"), "Fuzz");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknob(PARAM("Level"), "Level");

    b.create_small_rackknobr(PARAM("Fuzz"), "Fuzz");
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace fuzzface
